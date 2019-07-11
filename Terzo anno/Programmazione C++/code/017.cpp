Color x = red;                 // error: which red?
Color y = Traffic_light::red;  // error: that red is not a Color
Color z = Color::red;          // OK

int i = Color::red;        // error: Color::red is not an int
Color c = 2;               // error: 2 is not a Color
