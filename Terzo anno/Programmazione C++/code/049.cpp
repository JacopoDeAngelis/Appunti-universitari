template<typename Container, typename Value>
Value sum(const Container& c, Value v)
{
    for (auto x : c)
          v+=x;
    return v;
}
