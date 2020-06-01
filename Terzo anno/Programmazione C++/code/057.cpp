string compose(const string& name, const string& domain)
{
     return name + '@' + domain;
}

auto addr = compose("dmr","bell–labs.com")
