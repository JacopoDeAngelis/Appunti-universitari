int* p1 = new int{99};
int* p2 = p1;                 // potential trouble
delete p1;                    // now p2 doesn't point to a valid object
p1 = nullptr;                 // gives a false sense of safety
char* p3 = new char{'x'};     // p3 may now point to the memory pointed to by p2
*p2 = 999;                    // this may cause trouble
cout << *p3 << '\n';          // may not print x
