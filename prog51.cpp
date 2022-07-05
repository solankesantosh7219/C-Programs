#include<iostream>
using namespace std;
// Program Title : Take  character From  user  And Check Small Character 
// Using ASSCI VAlue >97      122<
// Date /17/06/2022/ 

class Demo
{
 public:
 bool CheckSmall(char ch1)
 {
   if((ch1>=97) && (ch1<=122))
   {
      return true;
   }
   else
   {
     return false;
   }
 }

};

int main()
{
 Demo Obj;
 bool iret = false;
 char ch;
 cout<<" Enter Your Character\n";
 cin>>ch;
 iret = Obj.CheckSmall(ch);
 if (iret == true)
 {
     cout<<" IT iS Small Character\n";
 }
 else
 { 
    cout<<" IT IS Not Small Character\n";
 }
  return 0;
}