#include<bits/stdc++.h>
using namespace std;

int f(int i,vector<int>&c,vector<int>&dp)
{
  if(i==0) return 0;
  if(dp[i]!=-1) return dp[i];
  int ans1=abs(c[i]-c[i-1])+f(i-1,c,dp);
  int ans2=INT_MAX;
  if(i>=2)
  {
    ans2=abs(c[i]-c[i-2])+f(i-2,c,dp);
  }
  return dp[i]=min(ans1,ans2);
}

int main()
{
  int n;
  cin>>n;
  vector<int>dp(n,-1);
  dp[0]=0;
  vector<int>c;
  for(int i=0;i<n;i++)
  {
    int ele;
    cin>>ele;
    c.push_back(ele);
  }
  for(int i=1;i<n;i++)
  {
    int ans1=abs(c[i]-c[i-1])+dp[i-1];
    int ans2=INT_MAX;
    if(i>=2)
    {
        ans2=abs(c[i]-c[i-2])+dp[i-2];
    }
    dp[i]=min(ans1,ans2);
  }
  cout<<dp[n-1];
  return 0;
}