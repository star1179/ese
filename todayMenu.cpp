#include "./include/todayMenu.h"
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <stdlib.h>
using namespace std;

extern "C"{
void show_todayMenu()
{
   // system("rm cafe.txt");
   // system("python3 getHTML.py");
    ifstream in("./txt/cafe.txt");
    string s = "";
    int count=1;
    cout<<"Today Cafeteria Menu!"<<endl;
    while(1)
    {
     getline(in, s);

     switch(count)
     {
      case 859:
      s=s.substr(33,130);
      cout <<"1 coner: "<<s << endl;
      break;
      case 871:
      s=s.substr(33,130);
      cout <<"2 coner: "<<s << endl;
      break;
      case 883:
      s=s.substr(33,130);
      cout <<"3 coner: "<<s << endl;
      break;
      case 895:
      s=s.substr(33,210);
      cout <<"4 coner: "<<s << endl;
      break;
     }
     count++;
     if(count ==900)
     break;
    }
    cout <<endl<<endl;
}


}
