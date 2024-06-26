/*___________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : 

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MOD = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;
    
    int cnt = 0;
    
    if(s[0] == '1' and s[1] == '1')
    {
        cnt += 21;
    }
    else if(s[0] == '0' and s[1] == '1' or s[0] == '1' and s[1] == '0')
    {
        cnt += 11;
    }
    else{
        cnt += 1;
    }
    
    int cnt1 = 0;
    
    if(s[2] == '1' and s[3] == '1')
    {
        cnt1 += 21;
    }
    else if(s[2] == '1' and s[3] == '0' or s[2] == '0' and s[3] == '1')
    {
        cnt1 += 11;
    }
    else{
        cnt1 += 1;
    }
    
    cout << cnt * cnt1 << endl;
    
    return;
}

int main()
{
    optimize();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}