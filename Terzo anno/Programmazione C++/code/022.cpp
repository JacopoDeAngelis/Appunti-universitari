Vector::Vector(int s){
    if (s<0) throw length_error{};
    elem = new double[s];
    sz = s;
}

void test(){
     try {
         Vector v(–27);
     }catch (std::length_error) {
         // handle negative size
     }catch (std::bad_alloc) {
         // handle memory exhaustion
     }
}
