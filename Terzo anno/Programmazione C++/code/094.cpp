void f()
{
     model = 200;     // error
     v[2] = 3;        // error
}

void g(const X* p)
{
     // can't modify *p here
}
void h()
{
     X val;       // val can be modified here
     g(&val);
     // ...
}
