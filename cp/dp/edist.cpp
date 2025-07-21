#include<bits/stdc++.h>
using namespace std;

string a,b;
int m,n;

int memo[2000][2000];
int recur(int i,int j)
{
    if(i==n && j==m)
    {
        return 0;
    }
    else if(i==n)
    {
        return m-j;
    }
    else if(j==m)
    {
        return n-i;
    }
    if(memo[i][j]!=-1)
    {
        return memo[i][j];
    }
    int ans=0;
    if(a[i]==b[i])
    {
        ans=recur(i+1,j+1);
    }
    else{
        ans=min({recur(i+1,j),recur(i,j+1),recur(i+1,j+1)})+1;
    }
    memo[i][j]=ans;
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        memset(memo,-1,sizeof(memo));
        n=a.length();
        m=b.length();
        cout<<recur(0,0)<<endl;
    }
    return 0;
}