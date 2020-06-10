void g()
{
     int var = 0;
     int& rr {var};
     ++rr;               // var is incremented to 1
     int* pp = &rr;      // pp points to var
}
