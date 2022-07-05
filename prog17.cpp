#include<iostream>
using namespace std;
// Date /23/06/2022
// Enter  First Number >=2 nacha gunakar 4 timing >  2*2*2*2
// Enter Second Number >=4
// Power is >>16
// program Title : Calculte  The Power of Number

class Demo
{
 public:
 int Power(int X , int y)
 {
    int i = 0, imult = 1;

    for(i = 1; i<=X; i++) // 4 time multification
    {
       imult = imult * y; //2*2*2*2 = 16 
    }
      return imult;
 }

};

int main()
{
 Demo Obj;
 int ino1 = 0, ino2 = 0, iret = 0;
 cout<<"Enter first Number\n";
 cin>>ino1;
 
 cout<<" Enter Second Number\n";
 cin>>ino2;

 iret =Obj.Power(ino1, ino2);
 cout<<" Power OF Number iS||>\n"<<iret<<"\n";

  return 0;
 
}