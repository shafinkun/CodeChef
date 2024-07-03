/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link :

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
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, int> freq;

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        freq[v[i]]++;
    }


    int mostFreq = 0, val = 0;
    for (auto it : freq)
    {
        if (it.second > mostFreq)
        {
            mostFreq = it.second;
            val = it.first;
        }
    }

    int totalCost = 0;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] != val)
        {
            totalCost += val;
        }
    }

    int lastTry = n - count(v.begin(), v.end(), 1);

    cout << min(lastTry, totalCost) << endl;
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