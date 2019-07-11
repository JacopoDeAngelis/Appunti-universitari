unique_ptr<Shape> read_shape(istream& is) // read shape descriptions from input stream is
{
     // read shape header from is and find its Kind k

     switch (k) {
     case Kind::circle:
          // read circle data {Point,int} into p and r
          return unique_ptr<Shape>{new Circle{p,r}};      // §5.2.1
     // ...
}

void user()
{
     vector<unique_ptr<Shape>> v;
     while (cin)
           v.push_back(read_shape(cin));
     draw_all(v);            // call draw() for each element
     rotate_all(v,45);               // call rotate(45) for each element
} // all Shapes implicitly destroyed
