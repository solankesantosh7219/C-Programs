#include<iostream>
using namespace std;
// Program Title : Take  character From  user  And Check Capital Character 
// Date /27/06/2022/ 

class Demo
{
 public:
bool  CheckCapital(char ch)
{
  if((ch>='A') && (ch<='Z'))
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
 if(iret == true)
 {
     cout<<" It IS Capital Character\n";
 }
 else
 {
    cout<<" IT IS NOT Capital Character\n";
 }

   return 0;
}