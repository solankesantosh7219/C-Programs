#include<iostream>
using namespace std;
//  Program Titale > Mod  operator it give  remindr if we Divide any Number
//  Date /23/06/2022/

class Demo
{ 
 public:
 void Display()
 {
   int ino1 = 7689;
   int iDigit = 0;

   iDigit = ino1%10;
   cout<<iDigit<<"\n";
   ino1 = ino1/10;

   iDigit = ino1 %10;
   cout<<iDigit<<"\n";
   ino1 = ino1/10;

   iDigit = ino1 %10;
   cout<<iDigit<<"\n";
   ino1 = ino1 /10;

   iDigit = ino1 %10;
   cout<<iDigit<<"\n";
   ino1 = ino1 /10;


 }


};

int main()
{

 Demo Obj;
 Obj.Display();
 
 return 0;

}