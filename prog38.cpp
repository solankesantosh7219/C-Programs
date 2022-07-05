#include<iostream>
using namespace std;
// Program Title :: Take  value From user in Array Make Addition 
// of Odd Number Number that Array that value using Helper Function
// Date/23/06/2022/

class Demo
{
 public:
 int CountOdd(int Brr[] , int iSize)
 {
   int iCnt = 0, iSum = 0;
   for(iCnt = 1; iCnt<=iSize; iCnt++)
   {
      if((Brr[iCnt] %2)!=0)
      {
         iSum = iSum + Brr[iCnt];
      }
   }
     return iSum;
 }

};

int main()
{
  Demo Obj;
  int ilength = 0, iret = 0, i = 0;
  int *p = NULL;

  cout<<" Enter Number OF Elemnts\n";
  cin>>ilength;

  p = new int[ilength];

  cout<<" Enter Numbers\n";
  for(i = 1; i<=ilength; i++)
  {
      cin>>p[i];
  }
  
  iret = Obj.CountOdd(p,ilength);
  cout<<" Addition Odd Number\n"<<iret<<"\n";

  return 0;
}