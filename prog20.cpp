#include<iostream>
using namespace std;
// Program Title : take no From user and Display reverse Number on that Number
// using seprate  1 Helper Function
// Date /14/06/2022/
// Input :      5
// Output :     5   4   3   2   1
// Pending

class Demo
{
 public:
 int Reverse(int ino2)
 {
   int i = 0;
   for(i = ino2; i>=0; i--)
   {
      cout<<i<<"\t";
   }
   
 }
   
};
int main()
{
 Demo Obj;
 int ino1 = 0, iret = 0;
 cout<<" Enter Your Number\n";
 cin>>ino1;
 Obj.Reverse(ino1);
 
 return 0;

}