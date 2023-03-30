//Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
int IsPrime(int n)
{
    int i;
    if(n < 2)
    {
        cout<<"This is not a prime number.\n";
        return 0;
    }

    for(i=2; i<n; i++)
    {
        if(n % i == 0 && n != 2)
        {
            cout<<"This is not a prime number.\n";
            return 0;
        }
    }
    cout<<"This is a prime number.\n";
    return 0;
}
int main()
{
    int num;
    cout<<"Enter a number to check whether it is prime or not : ";
    cin>> num;
    IsPrime(num);
    return 0;
}