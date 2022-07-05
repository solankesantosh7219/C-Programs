#include<iostream>
using namespace std;
// Program Title : Take  character From  user  And 
// Check Digit  Or NOT 
// Date /27/06/2022/ 

class Demo
{
 public:
 bool CheckDigit(char ch1)
 {
   if((ch1>='0') && (ch1<='9'))
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
 char ch;
 bool iret = false;
 cout<<" Enter Your Number\n";
 cin>>ch;
 
 iret = Obj.CheckDigit(ch);
 
 if(iret == true)
 {
    cout<<" IT IS Digit\n";
 }
 else
 {
    cout<<" It IS Character\n";
 }

 return 0;
}