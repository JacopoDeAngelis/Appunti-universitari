default:             // name, name =, or error
    if (isalpha(ch)) {
          ip–>putback(ch);                // put the first character back into the input stream
          *ip>>ct.string_value;           // read the string into ct
          ct.kind=Kind::name;
          return ct;
    }
