template<typename T>
void f(T);

f({});        // error: type of initializer is unknown
f({1});       // error: an unqualified list does not match "plain T"
f({1,2});     // error: an unqualified list does not match "plain T"
f({1,2,3});   // error: an unqualified list does not match "plain T"
