#include<iostream>
using namespace std;
// Program Title : Take Chracter From user  Swap the that  characters    
 // Date /23/06/2022/ 
 // using Helper Function
 

 class Demo
 {
    public:
    char Swap(char *p , char *q)
    {
       char Temp;

       Temp = *p;
       *p = *q;
       *q = Temp;

    }

 };

 int main()
 {
   Demo Obj;
   char ch1,ch2;
   printf(" Enter First  Character\n");
   scanf("%c",&ch1);

   printf(" Enter  Second Charactre\n");
   scanf(" %c",&ch2); // we need here take space Scanf(" %c")

   printf(" Before Swapping Character\n %c %c",ch1,ch2); // first display  swapping character
   
   Obj.Swap(&ch1,&ch2); //  Function call with   // Swap(100,200)  send  values with Address

   printf(" After Swapping Character\n %c %c",ch1,ch2); 

 return 0;

 }