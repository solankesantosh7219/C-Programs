#include<iostream>
using namespace std;
// Program Title : Take  character From  user  And Check Capital Character 
// Using ASSCI VAlue >65       90<
// Date /27/06/2022/ 

class Demo
{
public:

bool CheckCapital(char ch1)
{
   if((ch1>=65)&&(ch1<=90))
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

 iret = Obj.CheckCapital(ch);
 if (iret == true)
 {
     cout<<" It IS CAPTIAl Character\n";
 }
 else
 {
    cout<<" It IS Not Capital Character\n";
 }

 return 0;

}