#include<iostream>
using namespace std;

int main()
{
    int n=3;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int alice=0;
    int bob=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<b[i])
        {
            bob+=1;
        }
        else if(a[i]>b[i])
        {
            alice+=1;
        }
    }
    cout<<alice<<" "<<bob;   
    return 0;
}
