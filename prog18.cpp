#include<iostream>
using namespace std;
// Date /23/06/2022
// Program Title:: Take any Number From user and Display * on Same Number


class Demo
{
 public:
 void Display(int ino2)
 {
    int i = 0;
    for(i = 0; i<=ino2; i++)
    {
       cout<<" *\t";
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