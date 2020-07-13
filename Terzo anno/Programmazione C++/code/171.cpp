auto x0 = {};       // error (no element type)
auto x1 = {1};      // initializer_list<int>
auto x2 = {1,2};    // initializer_list<int>
auto x3 = {1,2,3};  // initializer_list<int>
auto x4 = {1,2.0};  // error: nonhomogeneous list
