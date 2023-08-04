#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,X,Y;
    cin>>T;
    if(T>=1 && T<=100)
    {
        while(T--)
        {
            cin>>X>>Y;
            if(X>=1 && X<=6 && Y>=1 && Y<=6)
            {
            if((X+Y)>6){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
            }
        }
    }
    return 0;
}