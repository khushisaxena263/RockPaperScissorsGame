#include<iostream>
#include<cstdlib>
#include<ctime>
#define rock 1
#define paper 2
#define scissor 3
int count=0;
int count1=0;
int count2=0;
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    int player_throw=0;
    int ai_throw=0;
    bool draw;
    do
    {
        cout<<"Select The Throw:"<<endl;
        cout<<"1) Rocks"<<endl;
        cout<<"2) Paper"<<endl;
        cout<<"3) Scissors"<<endl;
        cin>>player_throw;

        ai_throw=(rand()%3)+1;

        if(ai_throw==rock)
        {
            cout<<"AI throws Rocks"<<endl;
        }
        else if(ai_throw==paper)
        {
            cout<<"AI throws paper"<<endl;
        }
        else if(ai_throw==scissor)
        {
            cout<<"AI throws Scissors"<<endl;
        }
        draw=false;
        if(player_throw==ai_throw)
        {
            cout<<"Draw!! Play again....."<<endl;
        }
        if(player_throw==scissor && ai_throw==paper)
        {
            cout<<"Player Win!!"<<endl;
            count++;
            count2++;
        }
        else if(player_throw==rock && ai_throw==scissor)
        {
            cout<<"Player Win!!"<<endl;
            count++;
            count2++;
        }
        else if(player_throw==paper && ai_throw==rock)
        {
            cout<<"Player Win!!"<<endl;
            count++;
            count2++;
        }
        else if(player_throw==paper && ai_throw==scissor)
        {
            cout<<"AI Win!!"<<endl;
            count++;
            count1++;
        }
        else if(player_throw==scissor && ai_throw==rock)
        {
            cout<<"AI Win!!"<<endl;
            count++;
            count1++;
        }
        else if(player_throw==rock && ai_throw==paper)
        {
            cout<<"AI Win!!"<<endl;
            count++;
            count1++;
        }
        
    } while (draw || count!=5);
    cout<<"\n -------------------------------------- \n";
    cout<<"                Player       "<<count2<<endl;
    cout<<"\n -------------------------------------- \n";
    cout<<"                AI           "<<count1<<endl;
    cout<<"\n -------------------------------------- \n";
   if(count2>count1)
   {
    cout<<"\n -------------------------------------- \n";
    cout<<"               Player Win!!!               \n";
    cout<<"\n -------------------------------------- \n";
   }
   else{
    cout<<"\n -------------------------------------- \n";
    cout<<"               AI Win!!!                  \n";
    cout<<"\n -------------------------------------- \n";
   }
   return 0; 
}