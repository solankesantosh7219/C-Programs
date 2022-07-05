#include<iostream>
using namespace std;
// Program Title::take String From User & Count Capital& Small Vowles
// 02/07/2022

class Demo
{
  public:
  char Vowles(char Brr[])
{
    
    int SCnt = 0, Cap;

    while(*Brr !='\0')
    {
      if((*Brr =='a'|| *Brr =='e'|| *Brr =='i' || *Brr =='o'|| *Brr =='u'))                                                                         
      {
           SCnt++;
      }
          Brr++;
    }
      cout<<" Number OF  Vowles Latter are||>"<<SCnt<<"\n";
}

};

int main()
{
    Demo Obj;
    char Arr[60];
    cout<<" Enter String\n";
    scanf("%[^'\n']s",Arr);

    Obj.Vowles(Arr);
    return 0;
}