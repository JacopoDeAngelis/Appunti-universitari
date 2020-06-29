program:
     end                           // end is end-of-input
     expr_list end

expr_list:
     expression print              // print is newline or semicolon
     expression print expr_list

expression:
     expression + term
     expression – term
     term

term:
     term / primary
     term * primary
     primary

primary:
     number                        // number is a floating-point literal
     name                          // name is an identifier
     name = expression
     – primary
     ( expression )
