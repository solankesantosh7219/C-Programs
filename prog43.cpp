#include<iostream>
using namespace std;
// Program Title : give value From user in Array Check Deference in   Max Number and  Min Number
// Array using Helper Function
// Date /26/06/2022/ 

class Demo
{
public:
 int CheckDeferance(int Brr[], int iSize)
 {
     int i = 0;
     int iMax = 0;
     int iMin = Brr[0];

     for(i = 0; i<=iSize; i++)
     {
          if (Brr[i]>iMax)
          {
              iMax = Brr[i];
          }
          else if(Brr[i]<iMin)
          {
             iMin = Brr[i];
          }
     }
     return iMin - iMax;   // Important
  }

};

int main()
{

    Demo Obj;
    int ilength = 0, iCnt = 0, iret = 0;
    int *p = NULL;

    cout<<" Enter Number OF Elemnts\n";
    cin>> ilength;

    p = new int[iCnt];

    cout<<" Enter Numbers\n";
    for(iCnt = 0; iCnt<=ilength; iCnt++)
    {
      cin>>p[iCnt];
    }
    
  iret = Obj. CheckDeferance(p,ilength);

  cout<<" MInMAxDefrance iS||>"<<iret<<"\n";

}