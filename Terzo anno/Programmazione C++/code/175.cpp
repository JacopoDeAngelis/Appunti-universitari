void print_modulo(const vector<int>& v, ostream& os, int m)
     // output v[i] to os if v[i]%m==0
{
     for_each(begin(v),end(v),Modulo_print{os,m});
}
