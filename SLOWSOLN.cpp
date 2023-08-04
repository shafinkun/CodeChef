#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,maxt,maxn,sumn;
    cin>>t;
    while(t--)
    {
        long long ans=0;
        cin>>maxt>>maxn>>sumn;
        while(maxt && sumn)
        {
            int n=min(maxn,sumn);
            ans += n*n;
            sumn-=n;
            maxt--;
        }
        cout<<ans<<endl;
    }
    return 0;
}