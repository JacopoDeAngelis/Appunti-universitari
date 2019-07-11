template<typename T>
T* begin(Vector<T>& x)
{
    return &x[0];          // pointer to first element
}

template<typename T>
T* end(Vector<T>& x)
{
    return x.begin()+x.size(); // pointer to one-past-last element
}
