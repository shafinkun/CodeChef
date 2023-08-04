#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t)
    {
        cin>>a>>b;
        if(a<=7 && b<=7)
        {
        if(a>=b) 
        {c=7-a;
        cout<<c<<endl;
        }
        else {c=7-b;
        cout<<c<<endl;}
        t--;
        }
    }
}