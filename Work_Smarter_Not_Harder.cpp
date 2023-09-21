#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l , v1 , v2;
        cin >> l >> v1 >> v2;
        int t1 , t2;
        if(l % v1 != 0)
            t1 = floor(l / v1) +1;
        else 
            t1 = l / v1;    
        if(l % v2 != 0)
            t2 = floor(l / v2) +1; 
        else
            t2 = l / v2;
            
        if(t1 - t2 - 1 >= 0)    
            cout << t1 - t2 - 1 << endl;
        else
            cout << -1 << endl;    
    }
    return 0;
}