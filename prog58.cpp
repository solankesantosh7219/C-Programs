#include<iostream>
using namespace std;
// Take String From USer Count Capital & Small Latter in String 
// Date /28/06/2022/

class Demo
{
 public:
 char Count(char Brr[])
 {
   int iCnt1 = 0;
   int iCnt2 = 0;
   while(*Brr !=0)
   {
      if ((*Brr>='a') && (*Brr<='z'))
      {
         iCnt1++;
      }
      else if((*Brr>='A') && (*Brr<='Z'))
      {
          iCnt2++;
      }
       Brr++;
   }
    cout<<" Small Count IS||>"<<iCnt1<<"\n";
    cout<<" Capital Count IS||>"<<iCnt2<<"\n";

 }

};

int main()
{
 Demo Obj;
 char Arr[40];
 cout<<" Enter Your String\n";
 scanf("%[^'\n']s",Arr);
 Obj.Count(Arr);

 return 0;

}