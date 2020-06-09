using Pchar = char*;        // pointer to character
using PF = int(*)(double);  // pointer to function taking a double and returning an int

template<class T>
class vector {
     using value_type = T;    // every container has a value_type
     // ...
};
template<class T>
class list {
     using value_type = T;    // every container has a value_type
     // ...
};
