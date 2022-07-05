#include<iostream>
using namespace std;
// Program Title:: Take String From USer Convert that String Reverse order
// Date 07/06/2022

class Demo
{
 public:
 char Reverse(char Str[])
 {
        char *end = Str; // pointer initalization
        char Temp;

        while(*end !='\0') // Strvaling whole String
        {
            end++;
        }
        end--;
        
        while(Str<end) // Reverse String
        {
          Temp = *Str; // Swapping String
          *Str = *end;
          *end = Temp;

          Str++; // Travling String 
          end--;
        }
        
 }
};

int main()
{
  Demo Obj;
  char Arr[90];
  cout<<" Enter String\n";
  scanf("%[^'\n']s",Arr);
  
  Obj.Reverse(Arr);
  cout<<" Reverse String IS|"<<Arr<<"\n";

}
