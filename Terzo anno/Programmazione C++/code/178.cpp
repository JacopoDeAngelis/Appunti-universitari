void f(vector<int>& v)
{
     bool sensitive = true;
     // ...
     sort(v.begin(),v.end()
          [sensitive](int x, int y) { return sensitive ? x<y : abs(x)<abs(y); }
     );
}
