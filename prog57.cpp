#include<iostream>
using namespace std;
// Take Character From User and Count white Space in in String
// Date/28/06/2022


class Demo
{
 public:
 char CountWspace(char Brr[])
 {
     int iCnt = 0;
    
    while(*Brr !=0)
    {
       if(*Brr ==' ')
       {
          iCnt++;
       }
         Brr++;
    }
      cout<<"White Space IS||>"<<iCnt<<"\n";
 }

};

int main()
{
    Demo Obj;
    char Arr[30];
    cout<<"Enter your String\n ";
    scanf("%[^'\n']s",Arr);

    Obj.CountWspace(Arr);

    return 0;
}

