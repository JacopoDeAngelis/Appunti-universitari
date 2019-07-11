constexpr double C = 299792.458;                        // km/s

void f(double speed){
     const double local_max = 160.0/(60*60);            // 160 km/h == 160.0/(60*60) km/s

     static_assert(speed<C,"can't go that fast");       // error: speed must be a constant
     static_assert(local_max<C,"can't go that fast");   // OK

     // ...
}
