#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,u;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        while(n--)
        {
            cin>>u;
            if(u<=k){
            cout<<1;
            k=k-u;}
            else cout<<0;
        }
        cout<<endl;
    }
    return 0;
}