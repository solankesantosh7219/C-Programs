#include<iostream>
using namespace std;
// Program Title: Check Even Number
// Date 23/06/2022/


class Demo
{
  public:
  bool CheckEven(int ino2)
  {
     if((ino2 %2) == 0)
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
    int ino1 = 0;
    bool iret = false;
    cout<<" Enter Your Number\n";
    cin>>ino1;
  iret =  Obj.CheckEven(ino1);
    if (iret == true)
    {
        cout<<" Number is Even\n";
    }
    else
    {
        cout<<" Number iS Odd\n";
    }
}