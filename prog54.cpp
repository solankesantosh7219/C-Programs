#include<iostream>
using namespace std;
// Program Title:: Take small Character From user and Convert That 
// Character  Capital TO Small
// Date/28/06/2022/     ch2+=32;

class Demo
{
 public:

 char CapitalTOSmall(char ch2)
     {
       if((ch2>='A') && (ch2<='Z'))
       {
           ch2+=32;
       }
     }
};

int main()
{

 Demo Obj;
 char ch;
 char ch1;
 cout<<" Enter Your Character\n";
 cin>>ch;

 ch1 = Obj.CapitalTOSmall(ch);
 cout<<" CapitalToSamll IS|>\n"<<ch1<<"\n";

 return 0;

}