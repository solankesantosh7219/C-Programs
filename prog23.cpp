#include<iostream>
using namespace std;
#include<iostream>
// is a header file that contains functions for input/output operations (cin and cout).
using namespace std;
// Program Title : take no From user OR Display Avarge  Number on that Number
// using seprate  1 Helper Function
// Date /23/06/2022/
// Input :  

class Demo
{
 public:
  float Avarage(int x , int y,  int z)
  {
     float ireslut = 0;
     int iSum = 0;
     
     iSum = x + y + z;
     ireslut = iSum / 3;

     return ireslut;
  }

};

int main()
{
  Demo Obj;
  int ino1 = 0, ino2 = 0, ino3 = 0;
  float iret = 0.f;
  cout<<" Enter First Number\n";
  cin>>ino1;

  cout<<" Enter Second Number\n";
  cin>>ino2;

  cout<<" Enter Third Number\n";
  cin>>ino3;

 iret = Obj.Avarage(ino1,ino2,ino3);
 cout<<" Total  Avarage iS||>"<<iret<<"\n";

  return 0;

}