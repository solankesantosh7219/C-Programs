#include<iostream>
using namespace std;
// Program Title : Take Chracter From user and CheckPallindrome that Chracter in String   
// CheckPallindrome String  // SanaS, SanTnaS
// Date /23/06/2022/ 
// using Helper Function
// using Flag 

class Demo
{
 public:
 bool CheckPallindrome(char Str[])
 {
       char *end = NULL; // Pointer
        end = Str; // in end Collect Value Str
        bool falg = true;

        while(*end !='\0')
        {
           end++; // Check Comper String
        }
        end--;
     
       while(*Str != *end) // Str< 
       {
         if (Str < end)
         {
             return falg = false;
             break;
         }
        Str++;
        end--;
     }
     return falg;
 }

};

int  main()
{
  Demo Obj;
  char Arr[30];
  bool iret = false;
  cout<<" Enter Your String\n";
  scanf("%[^'\n']s",Arr);

 iret = Obj.CheckPallindrome(Arr);
 if(iret == true)
 {
     cout<<" It iS Pallindrome String\n";
 }
 else
 {
    cout<<" It Is Not Pallindrome String\n";
 }

    return 0;
}





