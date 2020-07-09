void f(int n)
{
     int* p = new(nothrow) int[n];        // allocate n ints on the free store
     if (p==nullptr) {// no memory available
           // ... handle allocation error ...
     }
     // ...
     operator delete(nothrow,p);         // deallocate *p
}
