#include<iostream>
using namespace std;
// Program Title : take no From user and Display Even  Number on that Number
// using seprate  1 Helper Function
// Date /23/06/2021/
// Input :    5
// iCnt        1    2   3   4    5
// Output :    2    4   6   8   10

class Demo
{
 public:
  void Display(int ino2)
  {
     int i = 0;
     for(i = 0; i<=ino2; i++)
     {
        cout<<i*2<<" Even IS||>\t"; // i cha Gunakar 2 ne 
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