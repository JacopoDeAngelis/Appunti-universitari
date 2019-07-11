class Container {
public:
     virtual double& operator[](int) = 0;     // pure virtual function
     virtual int size() const = 0;            // const member function (§3.2.1.1)
     virtual ~Container() {}                  // destructor (§3.2.1.2)
};
