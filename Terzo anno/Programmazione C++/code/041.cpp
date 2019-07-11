class Vector {
private:
     double* elem; // elem points to an array of sz doubles
     int sz;
public:
     Vector(int s);                       // constructor: establish invariant, acquire resources
     ~Vector() { delete[] elem; }         // destructor: release resources

     Vector(const Vector& a);             // copy constructor
     Vector& operator=(const Vector& a);  // copy assignment

     double& operator[](int i);
     const double& operator[](int i) const;

     int size() const;
};
