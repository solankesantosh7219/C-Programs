#include<iostream>
using namespace std;
// Program Title Check Perfect Number is  or not
// using seprate 2 Helper Function
// Date /03/06/2022/
// 1+2+3 = 6 
// 1+2+4+7+14 = 28

class Demo
{
 public: // Function 2
   bool CheckPerFect(int input) // call 2
  {
    int rNumber = 0;
        rNumber = SumFact(input); // Comper After Complet Addition
    if(rNumber == input)
    {
         return true;
    }
    else
    {
        return false;
    }
  } 
      // Function 1
     int SumFact(int ino3 )
     {
         int i = 1, iSum = 0;
         for(i = 1; i<=ino3/2; i++) // x2 == 0
         {
            if((ino3 % i) == 0) // make Addition 2 + 4 + 6
            {
                iSum = iSum + i; // Total Addition Should be input Number Like input 28
                                 // Addition 28
            }
         }
         return iSum;  // return call 2 Function
     }

};

int main()
{
  Demo Obj;
  int ino1 = 0;
  bool iret = false;
  cout<<" Enter Your Number\n";
  cin>>ino1;
   // main Function  1
 iret = Obj.CheckPerFect(ino1); // function call 2
 if(iret == true)
 {
     cout<<" IT IS Perfect Number\n";
 }
 else
 {
     cout<<" IT IS Not PerFect Number\n";
 }
  return 0;
}