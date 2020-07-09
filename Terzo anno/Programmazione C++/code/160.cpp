void f()
{
     vector<char* >v;
     try {
          for (;;) {
                 char* p = new char[10000];  // acquire some memory
                 v.push_back(p);             // make sure the new memory is referenced
                 p[0] = 'x';                 // use the new memory
          }
     }
     catch(bad_alloc) {
          cerr << "Memory exhausted!\n";
     }
}
