#include<iostream>
using namespace std;
// Program Title : take no From user and Display * and Number  that Number
// using seprate  1 Helper Function
// Date /23/06/2022/

class Demo
{
 public:
 void Display(int ino2)
 {
   int  i  =0;
   for(i = 0; i<=ino2; i++)
   {
      cout<<" *\t"<<i<<"\n";
   }
 }

};

int main()
{
 Demo Obj;
 int ino1 = 0;
 cout<<" Enter Your Number\n";
 cin>>ino1;
 Obj.Display(ino1);

 return 0;

}