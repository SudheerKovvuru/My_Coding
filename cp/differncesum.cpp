#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pref[n]={0};
    int q;
    cin>>q;
    while(q--)
    {
        int l,r,x;
        cin>>l>>r>>x;
        pref[l]+=x;
        if((r+1)<n)
            pref[r+1]-=x;
    }
    for(int i=1;i<n;i++)
    {
        pref[i]+=pref[i-1];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]+=pref[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}