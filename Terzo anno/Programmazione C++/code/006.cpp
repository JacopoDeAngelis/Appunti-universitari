void print(){
     int v[] = {0,1,2,3,4,5,6,7,8,9};

     for (auto x : v)            // for each x in v
           cout << x << '\n';

     for (auto x : {10,21,32,43,54,65})
           cout << x << '\n';
     // ...
}
