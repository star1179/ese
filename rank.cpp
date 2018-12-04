#include "include/rank.h"
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;
void show_searchRank()
{

    ifstream in("naver.txt");

    string s="";
    string goal_start="<span class=\"ah_k\">";
    string goal_end="</span>";
    string end_of_file="</body></html>";

    string * rank=new string[50];
    int count=0;

    cout<<"Naver Searching Rank"<<endl;

    while(s!=end_of_file)
    {
        getline(in, s);
        if(!s.find(goal_start)) 
        {
            s.erase(0,goal_start.length());
            s.erase(s.length()-goal_end.length(), s.length());
            rank[count]=s;
            cout<<count<<"th : "<<rank[count]<<endl;
            count++;
            if(count == 10)
             break;

        }
    }
}

void show_news()
{
    ifstream in("naver.txt");

    string s="";
    string goal_start="<li class=\"ca_item\">";
    string goal_end="</a></li>";
    string end_of_file="</body></html>";

    string * rank=new string[10];
    int count=1;

    cout<<"Today's Quick Hot news"<<endl;

    while(s!=end_of_file)
    {
        getline(in, s);
        if(!s.find(goal_start)) 
        {
            s.erase(0,goal_start.length());
            s.erase(s.length()-goal_end.length(), s.length());
            rank[count]=s;
            rank[count] = rank[count].substr(162,170);
            cout<<count<<rank[count]<<endl;
            count++;
            if(count == 11)
             break;

        }
    }

}
int main()
{
 show_searchRank();
 show_news();
}
