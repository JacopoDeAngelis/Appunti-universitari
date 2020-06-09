char v1 {12345};     // error: narrowing
int v2 {'c'};        // fine: implicit char->int conversion
T v3 {f()};          // works if and only if the type of f() can be implicitly converted to a T
