Token_stream ts {cin};

int main(int argc, char* argv[])
{
    switch (argc) {
    case 1:                                      // read from standard input
         break;
    case 2:                                      // read from argument string
         ts.set_input(new istringstream{argv[1]});
         break;
    default:
         error("too many arguments");
         return 1;
    }

    table["pi"] = 3.1415926535897932385;         // insert predefined names
    table["e"] = 2.7182818284590452354;

    calculate();

    return no_of_errors;
}
