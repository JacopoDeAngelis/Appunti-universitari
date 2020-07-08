struct Enode {
     Token_value oper;
     Enode* left;
     Enode* right;
     // ...
};
Enode* expr(bool get)
{
     Enode* left = term(get);

     for (;;) {
            switch (ts.current().kind) {
            case Kind::plus:
            case Kind::minus:
                 left = new Enode {ts.current().kind,left,term(true)};
                 break;
            default:
                 return left;            // return node
            }
     }
}
