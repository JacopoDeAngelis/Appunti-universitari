float v[3];     // an array of three floats: v[0], v[1], v[2]
char* a[32];    // an array of 32 pointers to char: a[0] .. a[31]

void f()
{
     int aa[10];
     aa[6] = 9;       // assign to aa's 7th element
     int x = aa[99];  // undefined behavior
}

void f(int n)
{
     int v1[n];          // error: array size not a constant expression
     vector<int> v2(n);  // OK: vector with n int elements
}
