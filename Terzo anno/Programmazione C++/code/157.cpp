void sloppy() // very bad code
{
     int* p = new int[1000];   // acquire memory
     // ... use *p ...
     delete[] p;               // release memory

     // ... wait a while ...

     delete[] p;               // but sloppy() does not own *p
}
