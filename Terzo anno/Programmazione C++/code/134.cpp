Token Token_stream::get()
{

    char ch = 0;
    *ip>>ch;

    switch (ch) {
    case 0:
         return ct={Kind::end}; // assign and return
