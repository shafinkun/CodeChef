#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,d,i,count=0;
    int n[i];
    cin>>t;
    while(t)
    {
        cin>>d;
        while(d){
            for(i=0;i<d;i++){
                cin>>n[i];
                if(n[i]>=1000) count++;
            }
            d--;
        }
        t--;
    }
    cout<<count;
    return 0;
}