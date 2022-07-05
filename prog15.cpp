#include<iostream>
using namespace std;

// Program Title:: Enter Any Number And Display   that Number Table
// using HaradCore VAlue
// Date 23/06/2022

class Demo
{
 public:
 void Table()
 {
   int ino1 = 5;
   int i = 0;
   for(i = 0; i<=10; i++)
   {
      cout<<i*ino1<<" \t";
   }
   


 }

};

int main()
{
  Demo Obj;
  Obj.Table();

  return 0;
}