class Entry2 { // two alternative representations represented as a union
private:
     enum class Tag { number, text };
     Tag type; // discriminant

     union {   // representation
         int i;
         string s; // string has default constructor, copy operations, and destructor
     };
public:
     struct Bad_entry { };     // used for exceptions

     string name;

     ~Entry2();
     Entry2& operator=(const Entry2&);     // necessary because of the string variant
     Entry2(const Entry2&);
     // ...

     int number() const;
     string text() const;

     void set_number(int n);
     void set_text(const string&);
     // ...
};
