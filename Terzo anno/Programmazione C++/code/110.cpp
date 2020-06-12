struct Points {
     vector<Point> elem;// must contain at least one Point
     Points(Point p0) { elem.push_back(p0);}
     Points(Point p0, Point p1) { elem.push_back(p0); elem.push_back(p1); }
     // ...
};

Points x0;                          // error: no default constructor
Points x1{ {100,200} };             // one Point
Points x1{ {100,200}, {300,400} };  // two Points
