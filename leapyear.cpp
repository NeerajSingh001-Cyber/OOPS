#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%400==0 || (n%4==0 && n%100!=0))
    {
        cout<<"This is a leap year";
    }
    else
    {
        cout<<"This is not a leap year";
    }
}