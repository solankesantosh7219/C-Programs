#include<iostream>
using namespace std;
// Program Title take Number From user and convert this Number reverse order using for loop
// exmple give number 7 
// Display ... 7654321
// Date 23/06/2022

class Demo
{
 public:
 void Reverse(int ino2)
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
    int ino1 = 0;
    cout<<" Enter Your Number\n";
    cin>>ino1;
    Obj.Reverse(ino1);

    return 0;
}