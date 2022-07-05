#include<iostream>
using namespace std;
// Program Title : Take Numbers From user in Array Check Min Number in Array using Helper Function
// Date /26/06/2022/ 
// check Min Number in Arrayy

class Demo
{
 public:
 int CheckMin(int Brr[], int iSize)
 {
    int i = 0;
    int iMin = Brr[0];

    for(i = 0; i <=iSize; i++)
    {
      if (Brr[i]<iMin)
      {
          iMin = Brr[i];
      }
    }
     return iMin;
 }


};

int main()
{
  Demo Obj;
  int ilength = 0, iCnt = 0, iret = 0;
  int *p = NULL;

  cout<<" Enter Number OF Elemnts\n";
  cin>>ilength;

  p = new int [ilength];

  cout<<" Enter Numbers\n";
  for(iCnt = 0; iCnt<=ilength; iCnt++)
  { 
     cin>>p[iCnt];
  }

 iret = Obj.CheckMin(p, ilength);
 cout<<" Min Number IS||>"<<iret<<"\n";

 return 0 ;


}
