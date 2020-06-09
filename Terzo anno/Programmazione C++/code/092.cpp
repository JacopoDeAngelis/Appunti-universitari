void comp(double arg[10])          // arg is a double*
{
     for (int i=0; i!=10; ++i)
           arg[i]+=99;
}
void f()
{
     double a1[10];
     double a2[5];
     double a3[100];

     comp(a1);
     comp(a2);     // disaster!
     comp(a3);     // uses only the first 10 elements
};
