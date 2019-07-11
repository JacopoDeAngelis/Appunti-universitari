class Smiley : public Circle { // use the circle as the base for a face
public:
     Smiley(Point p, int r) : Circle{p,r}, mouth{nullptr} { }

     ~Smiley()
     {
          delete mouth;
          for (auto p : eyes) delete p;
     }
     void move(Point to);

     void draw() const;
     void rotate(int);

     void add_eye(Shape* s) { eyes.push_back(s); }
     void set_mouth(Shape* s);
     virtual void wink(int i);    // wink eye number i

     // ...

private:
     vector<Shape*> eyes;         // usually two eyes
     Shape* mouth;
};
