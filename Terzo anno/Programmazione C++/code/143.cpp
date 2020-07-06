Token_stream ts {cin};  // use input from cin

void calculate()
{
     for (;;) {
           ts.get();
           if (ts.current().kind == Kind::end) break;
           if (ts.current().kind == Kind::print) continue;
           cout << expr(false) << '\n';
     }
}

int main()
{
     table["pi"] = 3.1415926535897932385;  // insert predefined names
     table["e"] = 2.7182818284590452354;

     calculate();

     return no_of_errors;
}
