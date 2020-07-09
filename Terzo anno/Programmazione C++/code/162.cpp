void* operator new (size_t sz, void* p) noexcept;       // place object of size sz at p
void* operator new[](size_t sz, void* p) noexcept;      // place object of size sz at p

void operator delete (void* p, void*) noexcept;         // if (p) make *p invalid
void operator delete[](void* p, void*) noexcept;        // if (p) make *p invalid
