Entry2& Entry2::operator=(const Entry2& e) // necessary because of the string variant
{
     if (type==Tag::text && e.type==Tag::text) {
           s = e.s;     // usual string assignment
           return *this;
     }

     if (type==Tag::text) s.~string(); // explicit destroy (§11.2.4)

     switch (e.type) {
     case Tag::number:
          i = e.i;
          break;
     case Tag::text:
          new(&s)(e.s); // placement new: explicit construct (§11.2.4)
          type = e.type;
     }

     return *this;
}
