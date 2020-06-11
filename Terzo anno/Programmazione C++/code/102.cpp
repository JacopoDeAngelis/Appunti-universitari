using rr_i = int&&;
using lr_i = int&;
using rr_rr_i = rr_i&&;    // "int && &&" is an int&&
using lr_rr_i = rr_i&;     // "int && &" is an int&
using rr_lr_i = lr_i&&;    // "int & &&" is an int&
using lr_lr_i = lr_i&;     // "int & &" is an int&
