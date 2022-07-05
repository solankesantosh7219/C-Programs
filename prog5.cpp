#include<iostream>
using namespace std;
//  Program Title >Take Number from user and return Factor that Number
//  example = 1, 2, ,3 ,4 , 6 = 12  saglya number ne gunakar kyla 12 Answer kadta yt
//  Date /23/ 06/ 2022/
//  > Factor of are: 1,2,3,6,
//    1*6, 2*3, 3*2, 6*1 = 6 
// 2*3 kyl tri Ans = 6 yt 3*2 Ans = 6 yt
// 12 = 1 x 2, x3, 4x 6x = Answer 12;


class Demo
{
 public:
 void Factor(int ino2)
 {
    int i = 0;
    int iMult = 1;
    for(i = 1; i<=ino2; i++)
    {
       if((ino2 % i) == 0) // yanaray Number ne bhag jaun final Ans milt  ka 
       {
          cout<<i;
       }
    }
 }

};

int main()
{
  Demo Obj;
  int ino1 = 0;

  cout<<" Enter Your Number\n";
  cin>>ino1;

 Obj.Factor(ino1);
 
  return 0;

}