int a1[10];                // 10 ints in static storage

void f()
{
     int a2 [20];          // 20 ints on the stack
     int*p = new int[40];  // 40 ints on the free store
     // ...
}
