#include<iostream>
using namespace std;
// take String From User and Count Small Character in String
// Date /27/06/2022
// important USing While Loop Here 
// important Here Character ch2++

class Demo
{
public:
char CountSmall(char Brr[])
{
    int iCnt = 0;
 
   while (*Brr !=0)
   {
    
   if((*Brr>='a') && (*Brr<='z'))
   {
       iCnt++;
   }
    Brr++;
 }
    return iCnt;
 }
   
};

int main()
{
  Demo Obj;
  char Arr[20];
  int iret = 0;
  cout<<" Enter Your String\n";
  scanf("%[^'\n']s",Arr);

 iret = Obj.CountSmall(Arr);
 cout<<" small Count IS|>"<<iret<<"\n";

  return 0;
}