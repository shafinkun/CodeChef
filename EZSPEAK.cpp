//that's an achievement 
#include <bits/stdc++.h>
using namespace std;
bool check(char wo)
{
    if(wo=='a' || wo=='e' || wo=='i' || wo=='o' || wo=='u'){return 0;}
    else {return 1;}
}
int main()
{
    int j,t;
    string word;
    cin>>t;
    while(t--)
    {
    int count=0;
    cin>>j;
    cin>>word;
    if(j<4){cout<<"YES\n";}
    else
    {   
        for(int i=0;i<j;i++)
        {
        if(check(word[i]))
        {
            count++;
            if(count>=4){cout<<"NO\n";
            break;}
        }
        else{count=0;}
        }
    if(count<4){cout<<"YES\n";}
    }
    }
    return 0;
}