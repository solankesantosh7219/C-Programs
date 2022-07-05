#include<iostream>
using namespace std;
// Program Title Check Number is CheckPallindrome or not
// Pallindrome Number is 75257, 121,1234321
// Date /23/05/2022/

class Demo
{
public:
 bool Display(int ino2)
 {
   int iDigit = 0;  
   int Temp = ino2;  // collect typed  value in iTemp 
   int iRev = 0;
   while(ino2 !=0)
   {
      iDigit = ino2%10;
      cout<<iDigit;
      iRev = (iRev*10 ) + iDigit;  
      ino2 = ino2 /10;
   }
   if(iRev == Temp) // check here typed Value & Reminder Value are ==  asl tr 
   {
       return true;
   }
   else
   {
      return  false;
   }
 }

};

int main()
{
 Demo Obj;
 int ino1 = 0;
 bool  iret = false;
 cout<<" Enter Your Number\n";
 cin>>ino1;
 iret = Obj.Display(ino1);
 if(iret == true)
 {
   cout<<" It iS Pallindrome Number\n";
 }
 else
 {
   cout<<" iT IS Not Pallindrome Number\n";
 }
 return 0;

}