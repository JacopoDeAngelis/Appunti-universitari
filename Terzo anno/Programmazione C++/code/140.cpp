Token Token_stream::get()
{
    char ch = 0;
    *ip>>ch;

    switch (ch) {
    case 0:
         return ct={Kind::end};    // assign and return
    case ';': // end of expression; print
    case '*':
    case '/':
    case '+':
    case '–':
    case '(':
    case ')':
    case '=':
         return ct=={static_cast<Kind>(ch)};
    case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
    case '.':
         ip–>putback(ch);                // put the first digit (or .) back into the input stream
         *ip >> ct.number_value;         // read number into ct
         ct.kind=Kind::number;
         return ct;
    default:              // name, name =, or error
         if (isalpha(ch)) {
              ip–>putback(ch);           // put the first character back into the input stream
              *ip>>ct.string_value;      // read string into ct
              ct.kind=Kind::name;
              return ct;
          }

          error("bad token");
          return ct={Kind::print};
    }
}
