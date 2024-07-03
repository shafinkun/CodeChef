/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://www.codechef.com/START141D/problems/SAMESAME

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
    int n, m;
    cin >> n >> m;

    string s, t;
    cin >> s;
    cin >> t;

    int hamming = INT_MAX;
    for(int i = 0; i <= n - m; i++)
    {
        int cnt = 0;
        for(int j = 0; j < m; ++j)
        {
            if(t[j] != s[i + j])
                cnt++;
        }
        hamming = min(hamming, cnt);
    }

    cout << hamming << endl;

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