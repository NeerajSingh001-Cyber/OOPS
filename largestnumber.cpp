#include<iostream>
using namespace std;
int main()
{
    int n,m,o;
    cin>>n;
    cin>>m;
    cin>>o;
    if(n>m && n>o)
    {
        cout<<"largest number:"<<n;
    }
    else if(m>n && m>o)
    {
        cout<<"largest number:"<<m;
    }
    else
    {
        cout<<"largest number:"<<o;
    }

}
