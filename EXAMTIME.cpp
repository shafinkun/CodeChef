#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,e,f;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>e>>f;
        if((a+b+c)>(d+e+f)){cout<<"DRAGON"<<endl;}
        else if((a+b+c)<(d+e+f)){cout<<"SLOTH"<<endl;}
        else {
            if(a>d){cout<<"DRAGON"<<endl;}
            else if(a<d){cout<<"SLOTH"<<endl;}
            else{
                if(b>e){cout<<"DRAGON"<<endl;}
                else if(b<e){cout<<"SLOTH"<<endl;}
                else {
                    if(c>f){cout<<"DRAGON"<<endl;}
                    else if(c<f){cout<<"SLOTH"<<endl;}
                    else cout<<"TIE"<<endl;
                }
            }
        }
    }
    return 0;
}