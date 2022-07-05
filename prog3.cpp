#include<iostream>
using namespace std;
//  Program Title >gives  Number from use and return Factorial that Number
//  Date /14/06/2022
// Input : 1
// Output : 1

// Input : 3   >>>> 3 x 2 x 1 = 6  // make Addition whole Number Natrual Number
// Output : 6 
// example 5= 5x2=10 10x3=30  30x4=120  120x5=600
// Input : 5
// Output : 120

class Demo
{
 public:
 int Factorial(int ino2)
 {
    int iMult = 1;
    int i = 0;
    for(i = 1; i<=ino2; i++)
    {
        iMult = iMult * i;
    }
     return iMult;
 }

};

int main()
{
  Demo Obj;
  int ino1 = 0;
  int iret = 0;
  cout<<" Enter your Number\n";
  cin>>ino1;

 iret = Obj.Factorial(ino1);
  cout<<" Factorial IS||>\n"<<iret<<"\n";
  return 0;

}