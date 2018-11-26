#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;
int main()
 
{
 
    // 파일 읽기 준비
 
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
        if(!s.find(goal_start))    //0은 거짓 0이 아니면 참 
        {
            s.erase(0,goal_start.length());
            s.erase(s.length()-goal_end.length(), s.length());
            rank[count]=s;
            cout<<count<<"th : "<<rank[count]<<endl;
            count++;
        }
        
        
    }
 
    return 0;
 
}

