void* operator new(size_t);       // allocate space for individual object
void operator delete(void* p);    // if (p) deallocate space allocated using operator new()
void* operator new[](size_t);     // allocate space for array
void operator delete[](void* p);  // if (p) deallocate space allocated using operator new[]()
