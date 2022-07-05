#include<iostream>
using namespace std;
// Program Title : Take value From user in Array Count >10 Number that Array that value
// using Helper Function
// Date /23/06/2021/                                                                                                                                                                    
// Count  

class Demo
{
 public:
  int Count(int Brr[] , int iSize)
  {
     int iCnt = 0;
     int iCnt2 = 0;

     for(iCnt = 1; iCnt<=iSize; iCnt++)
     {
        if(Brr[iCnt]>=10)
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
  int ilength = 0, iret = 0, i = 0;
  int *p = NULL;

  cout<<" Enter Number OF Elemnts\n";
  cin>>ilength;

  p = new int[ilength];

  cout<<" Enter Numbers\n";
  for(i = 1; i<= ilength; i++)
  {
      cin>>p[i];
  }
  
  iret = Obj.Count(p,ilength);
  cout<<" GreterThan 10 Count IS||>"<<iret<<"\n";

   return 0;

}