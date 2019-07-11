template<typename T, typename... Tail>
void f(T head, Tail... tail)
{
     g(head);    // do something to head
     f(tail...); // try again with tail
}

void f() { }     // do nothing
