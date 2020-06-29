class Token_stream {
public:
     Token get();            // read and return next token
     const Token& current(); // most recently read token
     // ...
};
