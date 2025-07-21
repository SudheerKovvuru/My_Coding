#include<bits/stdc++.h>
using namespace std;

int happy(int i,int ind,int n,vector<vector<int>>&arr,vector<vector<int>>&dp)
{
    if(i==n) return 0;
    if(dp[i][ind]!=-1) return dp[i][ind];
    if(ind==0) return dp[i][ind]=max((arr[i][ind+1]+happy(i+1,ind+1,n,arr,dp)),
                            (arr[i][ind+2]+happy(i+1,ind+2,n,arr,dp)));
    else if(ind==1)return dp[i][ind]=max((arr[i][ind-1]+happy(i+1,ind-1,n,arr,dp)),
                            (arr[i][ind+1]+happy(i+1,ind+1,n,arr,dp)));
    else return dp[i][ind]=max((arr[i][ind-1]+happy(i+1,ind-1,n,arr,dp)),
                            (arr[i][ind-2]+happy(i+1,ind-2,n,arr,dp)));
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>>arr;
    for(int i=0;i<n;i++)
    {
        vector<int>sub;
        for(int j=0;j<3;j++)
        {
            int ele;
            cin>>ele;
            sub.push_back(ele);
        }
        arr.push_back(sub);
    }
    vector<vector<int>>dp(n,vector<int>(3,-1));
    cout<<max(happy(0,0,n,arr,dp),max(happy(0,1,n,arr,dp),happy(0,2,n,arr,dp)));
    return 0;
}