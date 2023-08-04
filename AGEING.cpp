#include<bits/stdc++.h>
int main()
{
    int t,x,y;
    std::cin>>t;
    while(t--)
    {
        std::cin>>x;
        std::cin>>y;
        if(y>x) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
    }
    return 0;
}