enum class Kind : char {
     name, number, end,
     plus='+', minus='–', mul='*', div='/', print=';', assign='=', lp='(', rp=')'
};

struct Token {
     Kind kind;
     string string_value;
     double number_value;
};
