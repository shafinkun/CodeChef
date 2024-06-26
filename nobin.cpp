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
    
    vector<int> v(n), v1(n);
    int temp;
        cin >> temp;
    v1[0] = temp;
    v[0] = temp;
    // cerr << v[0];

    for(int i = 1; i < n; i++)
    {
        int temp;
        cin >> temp;
        v1[i] = temp;
        v[i] = v[i-1] + temp;
    }
    reverse(v1.begin(), v1.end());
    int ans1=0,ans2=0;
    for(int i = n-1; i >= 0; i--)
    {
        if(v[i] % 2 == 0)
        {
            ans1 = max(i+1, ans1);
        }
    }
    for(int i = 1; i < n; i++)
    {
        v1[i] += v1[i-1];
    }
    for(int i = n-1; i >= 0; i--)
    {
        if(v1[i] % 2 == 0)
        {
            ans2 = max(i+1,ans2);
        }
    }

    cout<<max(ans1,ans2)<<endl;
    
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