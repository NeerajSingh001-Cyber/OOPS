#include<iostream>
using namespace std;
int main()
{
    int n,r;
    int sum=0;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    cout<<sum;
}