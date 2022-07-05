#include<iostream>
using namespace std;
// Take String From USer only Count in String Number OF Vowels
// case senstive 
// Date /28/06/2022/

class Demo
{
  public:
  char CountVowles(char Brr[])
  {  int iCnt = 0;

    while(*Brr !=0)
    {
        if((*Brr =='a'|| *Brr =='e'|| *Brr == 'o'|| *Brr == 'i'|| *Brr =='u' ))
        {
            iCnt++;
        }
         Brr++;
     }
      cout<<" Count Number OF Vowles\n"<<iCnt<<"\n";
  }
};

int main()
{
 Demo Obj;
 char Arr[40];
 cout<<" Enter Your String\n";
 scanf("%[^'\n']s",Arr);

 Obj.CountVowles(Arr);
 return 0;

}