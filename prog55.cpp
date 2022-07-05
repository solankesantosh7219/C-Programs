#include<iostream>
using namespace std;
// Take Character From user Toggle that Character
// Latter typed >A Convert Samll >a // Capital To Small ch2+=32
// Latter typed >a Convert Samll >A // Small TO Capital ch2-=32
// Date/28/06/2022/

class Demo
{
public:
char ToggleCharacter(char ch1)
{
 if(( ch1>='a') && (ch1<='z'))
 {
       ch1-=32;
 }
 else if((ch1>='A') && (ch1<='Z'))
 {
      ch1+=32;
 }
  
  cout<<" ToggleCharacter iS|>"<<ch1<<"\n";
}


};

int main()
{
 Demo Obj;
 char ch1;
 char ch2;
 cout<<" Enter Your Character\n";
 cin>>ch1;

 ch1 = Obj.ToggleCharacter(ch1);


}
