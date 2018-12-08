#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "./include/sendList.h"

using namespace std;
extern "C"{
void send_list()
{
 ofstream fout;
 ifstream fin;
 ifstream fin2;

 string line;
 fout.open("./web/index.html");
 fin.open("sche.txt");
 fin2.open("todo.txt");
 string head[6] = {"<!DOCTYPE html>", "<html>", "<head>", "<title>MY DAILY by dj & mh</title>", "</head>", "<body>"};
 string tail[2] = {"</body>", "</html>"};

 for (int i = 0 ; i<6; i++)
 {
  fout << head[i];
 }

 fout << "<h1>MY SCHEDULE</h1>"<<endl;
 fout << "<p>" <<endl;

 while(true)
 {
  getline(fin,line);
  if(fin.eof())
   break;
  fout << line << "<hr>" ;
 }
 fout << "\n</p>" <<endl;

 fout << "<h1>MY SCHEDULE</h1>"<<endl;
 fout << "<p>" <<endl;

 while(true)
 {
  getline(fin2,line);
  if(fin2.eof())
   break;
  fout << line << "<hr>" ;
 }


 fout << "\n</p>" <<endl;

 for (int i = 0; i < 2; i++)
 {
  fout << tail[i] << endl;
 }
 system("cp index.html /var/www/html/");
 system("firefox 192.168.226.128/index.html");
}
}

