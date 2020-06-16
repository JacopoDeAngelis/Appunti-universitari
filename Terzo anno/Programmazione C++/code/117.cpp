int Entry2::number() const
{
     if (type!=Tag::number) throw Bad_entry{};
     return i;
};

string Entry2::text() const
{
     if (type!=Tag::text) throw Bad_entry{};
     return s;
};
