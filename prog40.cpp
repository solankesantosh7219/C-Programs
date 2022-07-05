#include<iostream>
using namespace std;
// Program Title: give value From user in Array Count >10   <20 Number that Array that value using Helper Function
// Date /23/06/2022/                                                                                          
// Count number 10>  <20  total Number in Array

class Demo
{
 public:
 int Count(int Brr[], int iSize)
 {
    int iCnt = 0, iCnt2 = 0;

    for(iCnt = 0; iCnt<=iSize; iCnt++)
    {
         if((Brr[iCnt]>10) && (Brr[iCnt]<20))
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
  int ilength = 0, i = 0, iret = 0;
  int *p = NULL;

  cout<<" Enter Number OF Elemnts\n";
  cin>>ilength;

  p = new int[ilength];

  cout<<" Enter Numbers\n";
  for(i = 0; i<=ilength; i++)
  {
     cin>>p[i];

  }
  
  iret = Obj.Count(p,ilength);
  cout<<" gerater Than>10 less<20||>"<<iret<<"\n";

  return 0;


}