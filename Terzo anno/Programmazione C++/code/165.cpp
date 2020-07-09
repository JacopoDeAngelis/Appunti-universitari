void destroy(X* p, Arena* a)
{
     p–>~X();       // call destructor
     a–>free(p);    // free memory
}
