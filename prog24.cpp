#include<iostream>
using namespace std;
// Title:: Display// Progra Minimum Number
// Date /23/06/2022/

class Demo
{
 public:
 int  MinumumNumber(int ivalue1 , int ivalue2)
 {
    int iReslut = 0;
    if(ivalue1 < ivalue2)
    {
       iReslut = ivalue1;
    }
    else
    {
        iReslut = ivalue2;
    }
     return iReslut;

 }

};
int main()
{
  Demo Obj;
  int ino1 = 0, ino2 = 0, iret = 0;
  cout<<" Enter First Number\n";
  cin>>ino1;

  cout<<" Enter Second Number\n";
  cin>>ino2;

  iret = Obj.MinumumNumber(ino1,ino2);
  cout<<"MinumumNumber iS||> "<<iret<<"\n";
  return 0;

}