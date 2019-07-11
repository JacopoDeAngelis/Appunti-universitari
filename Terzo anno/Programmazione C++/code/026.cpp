class Vector {
public:
     Vector(std::initializer_list<double>);     // initialize with a list
     // ...
     void push_back(double);                    // add element at end increasing the size by one
     // ...
};

Vector read(istream& is)
{
    Vector v;
    for (double d; is>>d;)     // read floating-point values into d
          v.push_back(d);      // add d to v
    return v;
}

Vector v1 = {1,2,3,4,5};            // v1 has 5 elements
Vector v2 = {1.23, 3.45, 6.7, 8};   // v2 has 4 elements

Vector::Vector(std::initializer_list<double> lst)    // initialize with a list
    :elem{new double[lst.size()]}, sz{lst.size()}
{
    copy(lst.begin(),lst.end(),elem);          // copy from lst into elem
}
