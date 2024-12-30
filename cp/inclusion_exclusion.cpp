#include<bits/stdc++.h>
using namespace std;

int prime[20]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,49,53,59,61,67};

int main()
{
    int m,n;
    cin>>m>>n;
    int ans=0;
    for(int mask=1;mask<(1<<n);mask++)
    {
        int lcm=1,cnt=0;
        for(int i=0;i<n;i++)
        {
            int bit=(mask>>i)&1;
            if(bit==1)
            {
                lcm*=prime[i];
                cnt++;
            }
        }
        if(cnt%2==1)ans+=m/lcm;
        else ans-=m/lcm;
    }
    cout<<ans<<endl;
    return 0;
}