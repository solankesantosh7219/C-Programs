#include<iostream>
using namespace std;
// is a header file that contains functions for input/output operations (cin and cout)
// Program Title : Take value From user in Array Count Even Number  in that Array that value using Helper Function
// Date /23/06/2022/ 
// Count Even Number  total Number in Array

class Demo
{
 public:
 int CountEven(int Brr[], int iSize)
 {
    int iCnt = 0, iCnt2 = 0;
    for(iCnt = 1; iCnt<=iSize; iCnt++)
    {
       if((Brr[iCnt] %2) == 0)
       {
           iCnt2++;
       }
    }
       return iCnt2;
 }

};

int main()
{
  Demo Obj;
  int ilength = 0, iret = 0;
  int *p = NULL;
  int i = 0;

  cout<<" Enter Number OF Elemnts\n";
  cin>>ilength;

  p = new int[ilength];

  cout<<" Enter Numbers\n";
  for(i = 1; i<=ilength; i++)
  {
     cin>>p[i];
  }
  
  iret = Obj.CountEven(p,ilength);
  cout<<" Array Even Number iS||>"<<iret<<" ";


   return 0;
}
