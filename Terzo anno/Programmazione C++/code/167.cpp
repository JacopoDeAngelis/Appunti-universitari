void* operator new(size_t sz, const nothrow_t&) noexcept;   // allocate sz bytes;
                                                            // return nullptr if allocation failed
void operator delete(void* p, const nothrow_t&) noexcept;   // deallocate space allocated by new

void* operator new[](size_t sz, const nothrow_t&) noexcept; // allocate sz bytes;
                                                            // return nullptr if allocation failed
void operator delete[](void* p, const nothrow_t&) noexcept; // deallocate space allocated by new
