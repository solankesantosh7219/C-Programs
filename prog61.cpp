#include<iostream>
using namespace std;
// Enter the String And count  that String  Same Character Freauency
// Date /02/06/2022

class Demo
{
 public:
 char CountFrecavancy(char Brr[], char ch2)
{
    int iCnt = 0;

    while(*Brr !='\0')
    {
      if(*Brr == ch2)
      {
         iCnt++;
      }
    }
    cout<<" Latter Frecvancy iS|>"<<iCnt<<"\n";
}

};
int main()
{
  Demo Obj;
  char ch1;
  char Arr[70];
  cout<<" Enter String\n";
  scanf("%[^'\n']s",Arr);

  Obj.CountFrecavancy(Arr,ch1);
return 0;

}
