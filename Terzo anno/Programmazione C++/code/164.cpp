extern Arena* Persistent;
extern Arena* Shared;

void g(int i)
{
     X* p = new(Persistent) X(i);   // X in persistent storage
     X* q = new(Shared) X(i);       // X in shared memory
     // ...
}
