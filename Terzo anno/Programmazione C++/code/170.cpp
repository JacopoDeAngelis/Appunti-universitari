int f(double d, Matrix& m)
{
      int v {7};          // initializer (direct initialization)
      int v2 = {7};       // initializer (copy initialization)
      int v3 = m[{2,3}];  // assume m takes value pairs as subscripts

      v = {8};            // right-hand operand of assignment
      v += {88};          // right-hand operand of assignment
      {v} = 9;            // error: not left-hand operand of assignment
      v = 7+{10};         // error: not an operand of a non-assignment operator
      f({10.0});          // function argument
      return {11};        // return value
}
