const int x = 7;
const string s = "asdf";
const int y = sqrt(x);

constexpr int xx = x;       // OK
constexpr string ss = s;    // error: s is not a constant expression
constexpr int yy = y;       // error: sqrt(x) is not a constant expression
