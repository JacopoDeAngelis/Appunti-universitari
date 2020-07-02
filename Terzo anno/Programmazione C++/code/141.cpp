Token Token_stream::get()
{

    char ch;

    do { // skip whitespace except '\n'
         if (!ip–>get(ch)) return ct={Kind::end};
    } while (ch!='\n' && isspace(ch));

    switch (ch) {
    case ';':
    case '\n':
         return ct={Kind::print};
