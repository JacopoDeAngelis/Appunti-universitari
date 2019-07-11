class Vector_container : public Container {   // Vector_container implements Container
     Vector v;
public:
     Vector_container(int s) : v(s) { }  // Vector of s elements
     ~Vector_container() {}

     double& operator[](int i) { return v[i]; }
     int size() const { return v.size(); }
};
