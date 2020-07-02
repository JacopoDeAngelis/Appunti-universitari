case ';':  // end of expression; print
case '*':
case '/':
case '+':
case '–':
case '(':
case ')':
case '=':
     return ct={static_cast<Kind>(ch)};
