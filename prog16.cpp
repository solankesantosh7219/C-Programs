#include<iostream>
using namespace std;
// Program Title:: Take  Any Number from user  And Display   that Number Table
//23/06/2022/


class Demo
{
 public:
 void Table(int ino2)
 {
     int i = 0;
     for( i = 0; i<=10; i++)
     {
       cout<<i*ino2<<"\n";
     }
     
 }
};

int main()
{
 int ino1 = 0;
 Demo Obj;
 cout<<" Enter Your Number\n";
 cin>> ino1;
 Obj.Table(ino1);

 return 0;


}