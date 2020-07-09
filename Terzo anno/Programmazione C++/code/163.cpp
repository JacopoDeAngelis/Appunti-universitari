class Arena {
public:
     virtual void* alloc(size_t) =0;
     virtual void free(void*) =0;
     // ...
};

void* operator new(size_t sz, Arena* a)
{
     return a–>alloc(sz);
}
