#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,s;
    cin>>r;
    if(r>0 && r<51) cout<<100<<endl;
    else if(r>50 && r<101) cout<<50<<endl;
    else cout<<0<<endl;
    return 0;
}