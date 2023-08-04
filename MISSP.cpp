#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,num,r;
    cin>>t;
    while(t--)
    {   
        r=0;
        cin>>n;
        while(n--)
        {
            cin>>num;
            r=r^num;
        }
        cout<<r<<endl;
    }
    return 0;
}