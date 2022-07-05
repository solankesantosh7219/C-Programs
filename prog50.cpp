#include<iostream>
using namespace std;
// Program Title : Take  character From  user  And Check Small Character 
// Date /27/06/2022/ 

class Demo
{
 public:
 bool CheckSmall(char ch1)
 {
   if((ch1>='a') && (ch1<='z'))
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
 if(iret == true)
 {
     cout<<" IT Small Character\n";
 }
 else
{

    cout<<" It Is Capital Character\n";
}

  return 0;
}