void rotate_all(vector<Shape*>& v, int angle) // rotate v's elements by angle degrees
{
     for (auto p : v)
           p–>rotate(angle);
}
