void increment(int& aa)
{
     ++aa;
}

void f()
{
     int x = 1;
     increment(x);      // x = 2
}

int next(int p) { return p+1; }

void g()
{
     int x = 1;
     increment(x);       // x = 2
     x = next(x);        // x = 3
}
