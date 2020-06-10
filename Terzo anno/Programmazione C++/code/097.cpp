void f()
{
     int var = 1;
     int& r {var};    // r and var now refer to the same int
     int x = r;       // x becomes 1

     r = 2;           // var becomes 2
}
