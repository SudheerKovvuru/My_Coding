#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(3));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    vector<vector<int>>dp(n+1,vector<int>(4,INT_MIN));
    for(int i=0;i<4;i++)
    {
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=3;j++)
        {
            for(int k=0;k<3;k++)
            {
                if(k!=j){
                    dp[i][j]=max(dp[i][j],arr[i-1][k]+dp[i-1][k]);
                }
            }
        }
        dp[i][3]=max({dp[i][0],dp[i][1],dp[i][2]});
    }
    return 0;
}