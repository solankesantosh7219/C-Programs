#include<iostream>
using namespace std;
//  Program Title > take Number From user return Reminder whole Number
//  Mod  operator it give  remindr if we Divide any Number
//  Date /23/06/ 2022/


class Demo
{ 
 public:
 void Display(int ino2)
 {
    int iDigit  = 0;
    while (ino2 !=0)
    {
        iDigit = ino2 %10;
        cout<<iDigit;
        ino2 = ino2 / 10;  
    }
 }
};

int main()
{
  Demo Obj;
 int ino1 = 0;
 cout<<" Enter Your Name\n";
 cin>>ino1;
 Obj.Display(ino1);
 return 0;
 
}