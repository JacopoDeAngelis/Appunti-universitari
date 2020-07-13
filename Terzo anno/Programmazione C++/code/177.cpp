void f(vector<int>& v)
{
     bool sensitive = true;
     // ...
     sort(v.begin(),v.end(),
          [](int x, int y) { return sensitive ? x<y : abs(x)<abs(y); }  // error: can't access sensitive
     );
}
