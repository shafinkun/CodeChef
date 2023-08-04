#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t)
    {
        cin>>a>>b;
        int c=(a*3>b*2) ? b*2 : a*3;
        cout<<c;
    }
}