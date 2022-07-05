#include<iostream>
using namespace std;
// is a header file that contains functions for input/output operations (cin and cout).
using namespace std;
// Program Title : take no From user OR Count  Total Number gratar >5
// using seprate  1 Helper Function
// Date /23/06/2022/

// Input : 127894 
// Output : 3

// Input : 561750
// Output : 4

class Demo
{
 public:
  int Count(int ino2)
  {
    int iDigit = 0;
    int iCnt = 0;

  while(ino2)
  {
    iDigit = ino2 %10;
    cout<<iDigit;
    if(iDigit >=5)
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
 Demo Obj;
 int ino1 = 0, iret = 0;
 cout<<" Enter Your Number\n";
 cin>>ino1;
 iret = Obj.Count(ino1);
 cout<<" GeratThan||=>"<<iret<<"\n";

 return 0;

}

