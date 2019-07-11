// Vector.h:

class Vector {
public:
     Vector(int s);
     double& operator[](int i);
     int size();
private:
     double* elem;    // elem points to an array of sz doubles
     int sz;
};

// Vector.cpp:

#include "Vector.h" // get the interface

Vector::Vector(int s)
    :elem{new double[s]}, sz{s}{
}

double& Vector::operator[](int i){
    return elem[i];
}

int Vector::size(){
    return sz;
}
