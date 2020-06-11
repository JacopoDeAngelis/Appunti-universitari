struct List;       // struct name declaration: List to be defined later

struct Link {
     Link* pre;
     Link* suc;
     List* member_of;
     int data;
};

struct List {
     Link* head;
};
