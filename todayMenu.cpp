#include "include/todayMenu.h"
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <stdlib.h>

using namespace std;
void show_todayMenu()
{
    system("rm cafe.txt");
    system("python3 getHTML.py");
    ifstream in("cafe.txt");

    string s="";
    string goal_start="<div class=\"year_0502_box\">";
    string goal_end="</dlv>";
    string end_of_file="</body></html>";

    string * menu = new string[5];
    int count=1;

    cout<<"Today Cafeteria Menu!"<<endl;
    while(1)
    {
     getline(in, s);
     switch(count)
     {
      case 807:
      s=s.substr(33,130);
      cout <<"1 coner: "<<s << endl;
      break;
      case 819:
      s=s.substr(33,130);
      cout <<"2 coner: "<<s << endl;
      break;
      case 831:
      s=s.substr(33,130);
      cout <<"3 coner: "<<s << endl;
      break;
      case 843:
      s=s.substr(33,190);
      cout <<"4 coner: "<<s << endl;
      break;
     }
     count++;
     if(count ==844)
     break;
    }
}


int main()
{
 show_todayMenu();
}
