string var {"Cambridge"};
string f();

string& r1 {var};              // lvalue reference, bind r1 to var (an lvalue)
string& r2 {f()};              // lvalue reference, error: f() is an rvalue
string& r3 {"Princeton"};      // lvalue reference, error: cannot bind to temporary
string&& rr1 {f()};            // rvalue reference, fine: bind rr1 to rvalue (a temporary)
string&& rr2 {var};            // rvalue reference, error: var is an lvalue
string&& rr3 {"Oxford"};       // rr3 refers to a temporary holding "Oxford"

const string cr1& {"Harvard"}; // OK: make temporary and bind to cr1
