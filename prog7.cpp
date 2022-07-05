#include<iostream>
using namespace std;
//  Program Title >Mod  operator it give  remindr if we Divide any Number
//  using while loop
//  Date /23/06/ 2022/



class Demo
{
 public:
 void Display()
 {
   int ino1 = 98765;
   int iDigit = 0;

   while(ino1 !=0)
   {
      iDigit = ino1 %10;
      cout<<iDigit<<"\n";
      ino1 = ino1 /10;
   }
 }

};
int main()
{
  Demo Obj;
  Obj.Display();

  return 0;
}