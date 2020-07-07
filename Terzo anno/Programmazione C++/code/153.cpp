constexpr const char* p1 = "asdf";
constexpr const char* p2 = p1;       // OK
constexpr const char* p2 = p1+2;     // error: the compiler does not know the value of p1
constexpr char c = p1[2];            // OK, c=='d'; the compiler knows the value pointed to by p1
