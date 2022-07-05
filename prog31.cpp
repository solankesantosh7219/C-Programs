#include<iostream>
using namespace std;
// Program Title : take no From user and Display   Below Same Structure
// Date /23/06/2022/ 
/*
    iRow = 4
    iCol = 4
 *
 *  *
 *  *   *
 *  *   *   *
 */

class Demo
{
 public:
 void Display(int iRows , int iColum)
 {
   int i = 0;
   int j = 0;
   for(i = 0; i<=iRows; i++)
   {
     for(j = 0; j<=iColum; j++)
     {
       if(i>j)
       {
          cout<<"*\t";
       }
     }
     cout<<" \n";
   }
 }

};

int main()
{
  Demo Obj;
  int ino1 = 0, ino2 = 0;
  cout<<" Enter Number OF Rows\n";
  cin>>ino1;

  cout<<" Enter Number OF Colum\n";
  cin>>ino2;

  Obj.Display(ino1, ino2);

  return 0;


}