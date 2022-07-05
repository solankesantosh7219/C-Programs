#include<iostream>
using namespace std;
// take Number from user 
// Program Title using modd operator we can got remindar any Number After Division
// and making Addition thise reminder
// 876543
// 8+7+6+5+4+3 = 33
// Date/23/06/2022/

class Demo
{
 public:
 int  Display(int ino2)
 {
    int i = 0, iDigit = 0;
    int iSum  = 0;

    while(ino2 !=0)
    {
        iDigit = ino2 %10;
        cout<<iDigit;
        iSum = iSum + iDigit;
        ino2 = ino2 /10;

    }
     return iSum;
 }

};

int main()
{
  Demo Obj;
  int ino1  = 0;
   int iret = 0;
  cout<<" Enter Your Number\n";
  cin>>ino1;
 iret = Obj.Display(ino1);
 cout<<" Addition Si||>\n"<<iret<<"\n";
  return 0;

}