int var = 1;
int& r1 {var};      // OK: r1 initialized
int& r2;            // error: initializer missing
extern int& r3;     // OK: r3 initialized elsewhere
