#include<iostream>
using namespace std;
// take Number from user  using 2 function 
// Program Title  using modd operator we can got remindar any Number After Division
// Count total Number in reminder only Even Number
// Date/23/06/2022/


class Demo
{
 public:
 int Display(int ino2)
 {
   int iDigit = 0;
   int iCnt = 0;

  while(ino2 !=0)
   {
      iDigit = ino2%10;
      cout<<iDigit;
      if((iDigit %2)==0)
      {
         iCnt++;
      }
      
      ino2 = ino2 /10;
   }
     return iCnt;
 }

};

int main()
{
  int ino1 = 0;
  int iret = 0;
  Demo Obj;

 cout<<" Enter Your Number\n";
 cin>>ino1;
 
iret = Obj.Display(ino1);
cout<<" Total Even Count iS||>"<<iret<<"\n";
return 0;

  
}
