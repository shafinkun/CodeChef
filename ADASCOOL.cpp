#include<bits/stdc++.h>
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(false);\
    cin.tie(NULL);\
    cout.tie(NULL);
using namespace std;
int main()
{
    optimize();

    int t,r,c;
    cin>>t;
    while(t--)
    {
        cin>>r>>c;
        if((r*c)%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}