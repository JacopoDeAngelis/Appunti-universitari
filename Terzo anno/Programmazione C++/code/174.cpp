class Modulo_print {
     ostream& os; // members to hold the capture list
     int m;
public:
      Modulo_print(ostream& s, int mm) :os(s), m(mm) {} // capture
      void operator()(int x) const
           { if (x%m==0) os << x << '\n'; }
};
