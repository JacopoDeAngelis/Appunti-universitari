void* operator new(size_t, void *p) { return p; }   // explicit placement operator

void* buf = reinterpret_cast<void* =>(0xF00F);      // significant address
X* p2 = new(buf) X;                                 // construct an X at buf;
                                                    // invokes: operator new(sizeof(X),buf)
