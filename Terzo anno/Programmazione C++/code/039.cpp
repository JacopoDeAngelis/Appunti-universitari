void user()
{
     std::vector<Shape*>v;
     while (cin)
          v.push_back(read_shape(cin));
     draw_all(v);                // call draw() for each element
     rotate_all(v,45);           // call rotate(45) for each element
     for (auto p : v) delete p;  // remember to delete elements
}
