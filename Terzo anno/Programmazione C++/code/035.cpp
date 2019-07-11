class Circle : public Shape {
public:
     Circle(Point p, int rr);         // constructor

     Point center() const { return x; }
     void move(Point to) { x=to; }

     void draw() const;
     void rotate(int) {}              // nice simple algorithm
private:
     Point x;  // center
     int r;    // radius
};
