#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        dp[i]=dp[i/2]+(i%2!=0);
        cout<<dp[i]<<" ";
    }
    return 0;
}