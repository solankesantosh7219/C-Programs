#include<iostream>
using namespace std;
// Program Title : give value From user in Array Calculte Avarage that value using Helper Function
// Date /23/06/2022/ 
// calculte Avarage  total Number in Array

class Demo
{
 public:
 int Display(int Brr[], int iSize)
 {
    int iCnt = 0;
    float iReslut = 0, iSum = 0;

    for(iCnt = 1; iCnt<=iSize; iCnt++)
    {
       iSum = iSum + Brr[iCnt];
    }
     iReslut = iSum / iSize;

      return iReslut;

 }

};

int main()
{
  Demo Obj;
  int ilength = 0, i = 0;
  int *p = NULL;
  float iret = 0;
  cout<<" Enter Number OF Elemnts\n";
  cin>>ilength;

  p = new int[ilength];

  cout<<" Enter Numbers\n";

  for(i = 1; i<=ilength; i++)
  {
     cin>>p[i];
  }
  
 iret = Obj.Display(p, ilength);
 cout<<" Total Array Avarge\n||>"<<iret<<" ";

  return 0;
}
