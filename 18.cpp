#include<iostream>
using namespace std;
int x,y,t=0;
void input()
{
    cout<<"Please Input OT Hours\n"<<endl;
    cin>>x;
    cout<<"\nPlease Input Hour Charge of an Employee\n"<<endl;
    cin>>y;
}
void calculate()
{
    t=t+(x*y);
}
void display()
{
    cout<<"OT Amount is"<<endl;
    cout<<t;
}
 main()
{
    input();
    calculate();
    display();
}

