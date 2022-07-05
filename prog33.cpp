#include<iostream>
using namespace std;
// Program Title :: give value From user in Array make Addition that value   using Helper Function
// Date /23/06/2022/ 

class Demo
{
 public:
 int Addition(int Brr[], int isize)
 {
    int iCnt = 0, iSum = 0;
    for(iCnt = 0; iCnt<=isize; iCnt++)
    {
        iSum = iSum + Brr[iCnt];
    }
      return iSum;
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

 cout<<"Enter Number\n";
 for(i = 0; i<ilength; i++)
 {
    cin>>p[i];
 }
  
 iret = Obj.Addition(p,ilength);
 cout<<" Addition IS||>"<<iret<<"\n";

   return 0;
}

