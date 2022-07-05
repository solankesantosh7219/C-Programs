#include<iostream>
using namespace std;
// Program Title:: Take small Character From user and Convert That 
// Character Small to Capital   ch2-=32;
// Date/28/06/2022/

class Demo
{
public:
char SmallToCapitaL(char ch2)
{
  if((ch2>='a') && (ch2<='z'))
  {
      ch2-=32;
  }
}

};

int main()
{

  Demo Obj;
  char ch;
  char ch1;
  cout<<" Enter Your Character\n";
  cin>>ch;

  ch1 = Obj.SmallToCapitaL(ch);
  cout<<" small To Capital IS|>"<<ch1<<"\n";
  return 0;
 
}
