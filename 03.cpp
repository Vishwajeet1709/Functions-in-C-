// Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int main()
{
    int x, y,i=1,pow;
    cout<<"Program to find X raised to the power Y.\n\n";
    cout<<"Provide values for X and Y : ";
    cin>>x>>y;
    pow = x;
    while(i < y)
    {
        pow = pow * x;
        i++;
    }
    cout<<x<<" raised to the power "<<y<<" is = "<<pow<<endl;
    return 0;
}