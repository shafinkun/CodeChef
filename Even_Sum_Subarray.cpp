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
    int n;
    cin >> n;
    
    vector<int> v(n + 1);
    v[0] = 0;
    // cerr << v[0];

    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v[i + 1] = v[i] + temp;
    }

    for(int i = n; i >= 0; i--)
    {
        if(v[i] % 2 == 0)
        {
            cout << i << endl;
            return;
        }
    }
    
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