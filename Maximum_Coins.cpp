/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://www.codechef.com/START143C/problems/MAXCOIN

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MOD = 1e9 + 7;

void solve()
{
    int n, x;
    cin >> n >> x;

    int ans = 0;
    while (x--)
    {
        ans += (1 << n);
        n--;
    }
    
    int lose = 0;
    while (n)
    {
        lose += (1 << n);
        n--;
    }

    cout << ans - lose << endl;

    return;
}

signed main()
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