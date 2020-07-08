char* save_string(const char* p)
{
    char* s = new char[strlen(p)+1];
    strcpy(s,p);        // copy from p to s
    return s;
}

int main(int argc, char* argv[])
{
    if (argc < 2) exit(1);
    char* p = save_string(argv[1]);
    // ...
    delete[] p;
}
