void print_addr2(const Address& r)
{
     cout << r.name << '\n'
          << r.number << ' ' << r.street << '\n'
          << r.town << '\n'
          << r.state[0] << r.state[1] << ' ' << r.zip << '\n';
}
