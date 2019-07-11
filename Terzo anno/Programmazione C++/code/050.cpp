template<typename T>
class Less_than {
     const T val;     // value to compare against
public:
     Less_than(const T& v) :val(v) { }
     bool operator()(const T& x) const { return x<val; } // call operator
};
