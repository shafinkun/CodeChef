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
    int N, M;
    cin >> N >> M;

    vector<int> A(N), B(N);
    for (int i = 0; i < N; ++i)
        cin >> A[i];
    for (int i = 0; i < N; ++i)
        cin >> B[i];

    unordered_map<int, int> remainderCountA;
    unordered_map<int, int> remainderCountB;

    for (int i = 0; i < N; ++i)
    {
        remainderCountA[A[i] % M]++;
    }

    for (int i = 0; i < N; ++i)
    {
        remainderCountB[B[i] % M]++;
    }

    int ways = 0;
    for (auto &[remainderA, countA] : remainderCountA)
    {
        int remainderB = (M - remainderA) % M;
        if (remainderCountB.find(remainderB) != remainderCountB.end())
        {
            ways += countA * remainderCountB[remainderB];
        }
    }

    cout << ways << endl;
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