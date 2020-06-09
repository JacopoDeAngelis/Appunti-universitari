void f(int* pi)
{
    void* pv = pi;  // ok: implicit conversion of int* to void*
    *pv;            // error: can't dereference void*
    ++pv;           // error: can't increment void* (the size of the object pointed to is unknown)

    int* pi2 = static_cast<int* >(pv);          // explicit conversion back to int*

    double* pd1 = pv;                           // error
    double* pd2 = pi;                           // error
    double* pd3 = static_cast<double*>(pv);     // unsafe (§11.5.2)
}
