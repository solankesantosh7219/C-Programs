#include<iostream>
using namespace std;
// Program Title : Take value From user in Array Check Max Number in Array using Helper Function
// Date /26/06/2022/ 
// check Max Number in Arrayy


class Demo
{
 public:
 int Checkmax(int Brr[], int iSize)
 {
     int i = 0;
     int iMax = 0;

    for(i = 0; i<=iSize; i++)
    {
        if(Brr[i] >iMax)
        {
            iMax = Brr[i];
        } 
    }
    return iMax;
 }

};

int main()
{
   Demo Obj;
   int ilength = 0, iCnt = 0, iret = 0;
   int *p = NULL;

   cout<<" Enter Number OF Elemnts\n";
   cin>>ilength;

   p = new int[ilength];

   cout<<" Enter Numbers\n";
   for(iCnt = 0; iCnt<= ilength; iCnt++)
   {
      cin>>p[iCnt];
   }
   
  iret =  Obj.Checkmax(p,ilength);
  cout<<" MaxNumber iS||>"<<iret<<"\n";

    return 0;
}
