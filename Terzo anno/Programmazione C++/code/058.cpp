const int size = 4*1024;
char page[size];

void f()
{
     page[size+size] = 7; // undefined
}
