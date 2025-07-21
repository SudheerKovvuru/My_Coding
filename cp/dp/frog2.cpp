#include<bits/stdc++.h>
using namespace std;

int f(int i,int k,vector<int>&c,vector<int>&dp)
{
  if(i==0) return 0;
  if(dp[i]!=-1) return dp[i];
  int res=INT_MAX;
  for(int j=1;j<=k;j++)
  {
    if(i>=j) res=min(res,abs(c[i]-c[i-j])+f(i-j,k,c,dp));
  }
  return dp[i]=res;
}

int main()
{
  int n;
  cin>>n;
  int k;
  cin>>k;
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
    int res=INT_MAX;
    for(int j=1;j<=k;j++)
    {
      if(i>=j) res=min(res,abs(c[i]-c[i-j])+dp[i-j]);
    }
    dp[i]=res;
  }
  cout<<dp[n-1];
  return 0;
}