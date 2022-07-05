#include<iostream>
using namespace std;
// Program Title : Array Basic Structrue
// Date /23/06/2022/

class Demo
{
  public:
  void Display()
  {
       int iSum = 0;
       int Arr[5]{10,20,30,40,50};
       cout<<Arr[0]<<"\n";
       cout<<Arr[1]<<"\n";
       cout<<Arr[2]<<"\n";
       cout<<Arr[3]<<"\n";
       cout<<Arr[4]<<"\n";

   
    iSum = Arr[0] + Arr[1]+ Arr[2]+ Arr[3] + Arr[4];
    cout<<iSum<<" Array Addition iS|>";

  }
  
};

int main()
{
  Demo Obj;
  Obj.Display();
}