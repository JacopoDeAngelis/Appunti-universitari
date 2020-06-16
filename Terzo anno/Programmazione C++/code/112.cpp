enum Type { str, num };

struct Entry {
     char* name;
     Type t;
     char* s;  // use s if t==str
     int i;    // use i if t==num
};

void f(Entry* p)
{
     if (p–>t == str)
           cout << p–>s;
     // ...
}
