#include<iostream>
using namespace std;
#include<stdbool.h>
// Program Title : Take value From user in Array Check  Number checkNumber is there or not Array using Helper Function
// Date /26/06/2022/ 
// check  Number is there or not  in Arrayy
// Program output Display  Correct 

class Demo
{
 public:
 bool CheckNumber(int Brr[], int iSize, int ino2)
 {
   int i = 0;

   for(i = 0; i<=iSize; i++)
   {
     if(Brr[i] == ino2)
     {
         return true;
     }
   }
   return false;
 }

};

int main()
{
  Demo Obj;
  int ilength = 0, iCnt = 0, ino1 = 0;
  int *p = NULL;
  bool iret = false;
  cout<<" Enter Number OF Elemnts\n";
  cin>>ilength;

  p = new int [ilength];

  cout<<" Enter Numbers\n";
  for(iCnt = 0; iCnt<=ilength; iCnt++)
  {
     cin>>p[iCnt];
  }
  
  cout<<" Enter Serach Number\n";
  cin>>ino1;
             
 iret = Obj.CheckNumber( p,ino1,ilength);
 if(iret == true)
 {
     cout<<" Numbers iS there||>\n";
 }
 else
 {
    cout<<" Number NOT There\n";
 }
 
  return 0;
}