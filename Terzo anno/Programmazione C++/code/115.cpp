union Fudge {
     int i;
     int* p;
};

int* cheat(int i)
{
     Fudge a;
     a.i = i;
     return a.p;     // bad use
}
