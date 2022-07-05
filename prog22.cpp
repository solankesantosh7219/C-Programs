#include<iostream>
using namespace std;
#include<iostream> 
// is a header file that contains functions for input/output operations (cin and cout).
 using namespace std;
// Program Title : take no From user if Number is Even Display * OR Display #  Number on that Number
// using seprate  1 Helper Function
// Date /04/06/2022/
// Input :      5
// Input :      6
// iCnt          1    2   3   4    5   6
// Output :      *    #   *   #   *   #

class Demo
{
  public:
  void Display(int ino2)
  {
     int i = 0;
     for(i = 1; i<=ino2; i++)
     {
        if((i %2) == 0)
        {
           cout<<" #\t";
        }
        else
        {
            cout<<" *\t";
        }
     }
  }
};

int main()
{
  Demo Obj;
  int ino1 = 0;
  int ino2 = 0;
  cout<<" Enter First Number\n";
  cin>>ino1;

  Obj.Display(ino1);
  return 0;
}