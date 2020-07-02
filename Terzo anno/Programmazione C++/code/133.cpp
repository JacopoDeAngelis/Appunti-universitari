class Token_stream {
public:
     Token_stream(istream& s) : ip{&s}, owns{false} { }
     Token_stream(istream* p) : ip{p}, owns{true} { }

     ∼Token_stream() { close(); }

     Token get();        // read and return next token
     Token& current();   // most recently read token

     void set_input(istream& s) { close(); ip = &s; owns=false; }
     void set_input(istream* p) { close(); ip = p; owns = true; }

private:
     void close() { if (owns) delete ip; }

     istream* ip;                     // pointer to an input stream
     bool owns;                       // does the Token_stream own the istream?
     Token ct {Kind::end} ;           // current token
};
