double read_and_sum(int s){
    // read s integers from cin and return their sum; s is assumed to be positive
    Vector v;
    vector_init(v,s);           // allocate s elements for v
    for (int i=0; i!=s; ++i)
          cin>>v.elem[i];       // read into elements

    double sum = 0;
    for (int i=0; i!=s; ++i)
          sum+=v.elem[i];       // take the sum of the elements
    return sum;
}
