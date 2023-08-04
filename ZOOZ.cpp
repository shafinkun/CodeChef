#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>i;
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
    return 0;
}