void algo(vector<int>& v)
{
     sort(v.begin(),v.end());  // sort values
     // ...
     sort(v.begin(),v.end(),[](int x, int y) { return abs(x)<abs(y); });    // sort absolute values
     // ...
}
