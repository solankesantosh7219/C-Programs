#include<iostream>
using namespace std;
// Take String From user Count Lenght OF whole String
// Date/26/06/2022/


class Demo
{
 public:
 void Display(string Str)
 {
    cout<<" Typed String IS:>\n"<<Str<<"\n";
    cout<<" "<<Str.length()<<"\n";


 }
};

int main()
{
    Demo Obj;
    string Str;
    cout<<" Enter String\n";
    cin>>Str;

    Obj.Display(Str);

    return 0;

}