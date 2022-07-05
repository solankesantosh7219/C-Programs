#include<iostream>
using namespace std;
// take Number from user  using 2 function 
// Program Title using modd operator we can got remindar any Number After Division
// Make Reverse  total Number in reminder 
// Date/23/06/2022/

class Demo
{
  public:
 int  Reverse(int ino2)
{
   int iDigit = 0;
   int iRev = 0;

   while(ino2 !=0)
   {
       iDigit = ino2 % 10;
       cout<< iDigit;
       iRev = (iRev*10) + iDigit; // (Rev * 10) Important Statments
       ino2 = ino2 /10;
   }
     cout<<" Reverse Reminder iS||>"<< iRev <<"\n";
}

};

int main()
{
  int ino1 = 0;
  int iret = 0;
  Demo Obj;
  cout<<" Enter Your Number\n";
  cin>>ino1;
   Obj.Reverse(ino1);

  return 0;

}
