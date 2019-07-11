template<typename T>
class Vector {
public:
     using value_type = T;
    // ...
};

template<typename C>
using Element_type = typename C::value_type;

template<typename Container>
void algo(Container& c)
{
     Vector<Element_type<Container>> vec; // keep results here
     // ...
}
