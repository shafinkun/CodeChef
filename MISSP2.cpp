#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,count=0;
    int num[n];
    cin>>t;
    cin>>n;
    while(t)
    {   
        int m=n;
        for(int i=0;i<m;i++)
        {
            cin>>num[i];
            if(num[i] % 2 != 0){count++;}
        }
        t--;    
    }
    cout<<count;
    return 0;
}