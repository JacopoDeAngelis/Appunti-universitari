bool accept2(){
     cout << "Do you want to proceed (y or n)?\n"; // write question

     char answer = 0;
     cin >> answer;                                // read answer
     switch (answer) {
     case 'y':
          return true;
     case 'n':
          return false;
     default:
          cout << "I'll take that for a no.\n";
          return false;
     }
}
