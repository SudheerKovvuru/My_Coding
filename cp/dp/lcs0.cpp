#include<bits/stdc++.h>
using namespace std;


string a,b;
int n,m;

int lcs(int i,int j)
{
    if(i==n|| j==m)
    {
        return 0;
    }
    int ans=0;
    if(a[i]==b[j])
    {
        ans=1+lcs(i+1,j+1);
    }
    else
    {
        ans=max(lcs(i+1,j),lcs(i,j+1));
    }
    return ans;
}
int main()
{
    cin>>a>>b;
    n=a.length();
    m=b.length();
    cout<<lcs(0,0);
    return 0;
}