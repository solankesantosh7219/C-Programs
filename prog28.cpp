#include<iostream>
using namespace std;
// Program Title take no From user and Display   Below Same Structure 
//    iRow = 4
//    iCol = 4
 
//   $   *   *   *
 
//    *   $   *   *
 
//    *   *   $   *
 
//    *    *   *   $
                      
// using seprate  1 Helper Function
// Date /23/06/2022/

class Demo
{
 public:
 void Display(int iRows,int iColum)
 {
   int i =  0, j = 0;
   for (i= 1; i<=iRows; i++)
   {
     for(j = 1; j<=iColum; j++)
     {
        if(i==j)
        {
          cout<<" $\t";
        }
        else
        {
            cout<<" *\t";
        }
     }
    cout<<"\n";
   }
 }

};
int main()
{
  Demo Obj;
  int ino1 = 0, ino2 = 0;
  
  cout<<" Enter Number OF ROWS\n";
  cin>>ino1;
 
  cout<<" Enter Number OF Colum\n";
  cin>>ino2;
  

  Obj.Display(ino1,ino2);
  return 0;


}