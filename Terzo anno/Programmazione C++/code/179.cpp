class Request {
     function<map<string,string>(const map<string,string>&)> oper;         // operation
     map<string,string> values;           // arguments
     map<string,string> results;          // targets
public:
     Request(const string& s);            // parse and store request
     void execute()
     {
          [this](){results=oper(values);}  // do oper to values yielding results
     }
};
