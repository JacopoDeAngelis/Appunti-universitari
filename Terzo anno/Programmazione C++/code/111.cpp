struct Point {
     int x, y;
};

Point p0;        // danger: uninitialized if in local scope (§6.3.5.1)
Point p1 {};     // default construction: {{},{}}; that is {0.0}
Point p2 {1};    // the second member is default constructed: {1,{}}; that is {1,0}
Point p3 {1,2};  // {1,2}

struct Address {
     string name;       // "Jim Dandy"
     int number;        // 61
     string street;     // "South St"
     string town;       // "New Providence"
     char state[2];     // 'N' 'J'
     char zip[5];       // 07974

     Address(const string n, int nu, const string& s, const string& t, const string& st, int z);
};
