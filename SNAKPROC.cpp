#include<bits/stdc++.h>
using namespace std;                    
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int ans=1;
        cin>>n;
        string s;
        cin>>s;
        string sr;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='.'){sr+=s[i];}
        }
        int b=sr.length();
        if(b%2==0)
        {
            for(int i=0;i<b;i++)
            {
                if(i%2==0 && sr[i]!='H') ans=0;
                else if(i%2!=0 && sr[i]!='T') ans=0;
            }
        }
        else ans=0;    
        if(ans) cout<<"Valid\n";
        else cout<<"Invalid\n";
    }

    return 0;
}