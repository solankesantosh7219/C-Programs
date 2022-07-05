#include<iostream>
using namespace std;
// Program Title:: take any Number From USer Calaclute binaray of that Number
// Date /02/07/2022

class Demo
{
 public:
 int CalculateBinaray(int ino2)
 {
      int iDigit = 0;
      while(ino2 !=0)
      {
          iDigit = ino2%2;
          cout<<iDigit<<"\t";
          ino2 = ino2/2;
      }
      cout<<" <|| iS Binaray";
 }
};

int main()
{
  Demo Obj;
  int ino1 = 0;
  cout<<" Enter Your Number\n";
  cin>>ino1;
  
  Obj.CalculateBinaray(ino1);
  return 0;

}

