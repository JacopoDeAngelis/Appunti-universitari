#include <limits>  // §40.2
#include <iostream>

int main()
{
     cout << "size of long " << sizeof(1L) << '\n';
     cout << "size of long long " << sizeof(1LL) << '\n';

     cout << "largest float == " << std::numeric_limits<float>::max() << '\n';
     cout << "char is signed == " << std::numeric_limits<char>::is_signed << '\n';
}
