#include<iostream>
using namespace std;
#include<iostream>// tells the preprocessor to include header files in the program
// Program Title:: // Program to find the missing Number
// C++ program for the above approach
#include <bits/stdc++.h> // tells the compiler to include all standard libraries

class Demo
{
 public:
 void FindMissNumber(int Brr[], int Count)
 {
  int Check = Brr[0];
  int i = 0;
  for(i = 0; i<Count; i++)
  {
    if(Brr[i] != Check)
    {
         while(Check<Brr[i]-i)
         {
            cout<< i + Check<<" Missing Number Are\n";
            Check ++;
         }
       }
    }
  }
};

int main()
{
  Demo Obj;
  int Arr[]{20,22,24,26,28};
  int N = sizeof(Arr) / sizeof(int); // Make Division whole Array
  Obj.FindMissNumber(Arr,N);

 return 0;
}