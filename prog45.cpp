#include<iostream>
using namespace std;
// Program Title: Take value From user in Array 
// Check  Number checkNumber is ther which index  number prsent or not Array using Helper Function
// Date /26/06/2022/                                                         
// serach  Number is there or not  in Array

class Demo
{
 public:
  int CheckNumber(int Brr[], int iSize, int ino2)
   {
      int i = 0;
      int index =-1;
      for(i = 0; i<=iSize; i++)
      {
        if(Brr[i] == ino2)
        {
           index = i;
        }
      }
       return index;
   }
};

int main()
{

 Demo Obj;
 int ilength = 0, iCnt = 0,iret = 0,  ino1 = 0;
 int *p = NULL;
 
 cout<<" Enter Number OF Elemnts\n";
 cin>>ilength;

 p = new int[ilength];

 cout<<" Enter Numbers\n";
 for(iCnt = 0; iCnt<ilength; iCnt++)
 {
    cin>>p[iCnt];
 }
 
  cout<<" Enter Search  Number present Which index !! ";
  cin>>ino1;
  
  iret = Obj.CheckNumber(p,ilength,ino1);

  if(iret ==-1)
  {
    cout<<" Number Not Prasent There ";
  }
  else
  {
      cout<<" Number PrasenT AT index "<<iret<<"\n";
  }
 
  return 0;
}