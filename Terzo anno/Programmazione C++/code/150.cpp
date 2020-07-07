int x1 = 7;
constexpr int x2 = 7;

constexpr int x3 = x1;           // error: initializer is not a constant expression
constexpr int x4 = x2;           // OK

void f()
{
     constexpr int y3 = x1;      // error: initializer is not a constant expression
     constexpr int y4 = x2;      // OK
     // ...
}
