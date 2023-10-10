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
        t1 = ceil(l*1.0 / v1*1.0);
        t2 = ceil(l*1.0 / v2*1.0);
        if(t1 - t2 - 1 >= 0)    
            cout << t1 - t2 - 1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}