#include<iostream>
using namespace std;
#include<iostream>
// is a header file that contains functions for input/output operations (cin and cout)
using namespace std;
// Program Title : Take no From user and Display ABCD Latter on that Number
// using seprate  1 Helper Function
// Date /23/06/2022/

// Input :      6
// iCnt         1    2   3   4    5   6
// Output :     a    b   c   d   e   f

class Demo
{
 public:
 char DisplayChar(int ino2)
 {
   int i = 0;
    char ch1 = 'A';

   for(i = 0; i<=ino2; i++)
   {
      cout<<" "<<ch1<<"\n";  // iT is verey important
      ch1++;
   }
 }
};

int main()
{
 
  Demo Obj;
  int ino1 = 0;
  
  cout<<" Enter Number\n";
  cin>>ino1;
  
  Obj.DisplayChar(ino1);

  return 0;


}


