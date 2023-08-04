#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    while(t--){
        int b=0;
        cin>>a;
        int n[a];
        for(int i=0;i<a;i++)
        {
            cin>>n[i];
            b+=n[i];
        }
        cout<<b<<endl;
        if(b%2==0) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}