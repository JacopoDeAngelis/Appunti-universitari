case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
case '.':
ip–>putback(ch);        // put the first digit (or .) back into the input stream
*ip >> ct.number_value; // read the number into ct
ct.kind=Kind::number;
return ct;
