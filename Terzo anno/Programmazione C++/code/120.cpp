Entry2::~Entry2()
{
     if (type==Tag::text) s.~string(); // explicit destroy (§11.2.4)
}
