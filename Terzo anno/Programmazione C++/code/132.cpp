double prim(bool get)             // handle primaries
{
    if (get) ts.get(); // read next token

    switch (ts.current().kind) {
    case Kind::number:         // floating-point constant
    {    double v = ts.current().number_value;
         ts.get();
         return v;
    }
    case Kind::name:
    {    double& v = table[ts.current().string_value];        // find the corresponding
         if (ts.get().kind == Kind::assign) v = expr(true);   // '=' seen: assignment
         return v;
    }
    case Kind::minus:        // unary minus
         return –prim(true);
    case Kind::lp:
    {    auto e = expr(true);
         if (ts.current().kind != Kind::rp) return error("')' expected");
         ts.get();         // eat ')'
         return e;
    }
    default:
         return error("primary expected");
    }
}
