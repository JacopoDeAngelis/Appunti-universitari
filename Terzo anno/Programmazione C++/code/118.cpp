void Entry2::set_number(int n)
{
     if (type==Tag::text) {
           s.~string();             // explicitly destroy string (§11.2.4)
           type = Tag::number;
     }
     i = n;
}

void Entry2::set_text(const string& ss)
{
     if (type==Tag::text)
           s = ss;
     else {
           new(&s) string{ss};      // placement new: explicitly construct string (§11.2.4)
           type = Tag::text;
     }
}
