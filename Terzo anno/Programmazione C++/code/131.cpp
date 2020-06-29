double expr(bool get)          // add and subtract
{
    double left = term(get);

    for (;;) {                       // "forever"
          switch (ts.current().kind) {
          case Kind::plus:
              left += term(true);
              break;
          case Kind::minus:
              left –= term(true);
              break;
          default:
              return left;
          }
    }
}
