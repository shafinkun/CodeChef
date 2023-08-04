#include <bits/stdc++.h>
#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0), \
    cin.tie(0),                 \
    cout.tie(0)
using namespace std;

int main()
{  
    optimize();

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int i;
        for(i = 1; n > 0; i++){
            n -= i;
        }
        if(n == 0)
            cout << i - 1 << endl;
        else
            cout << i - 2 << endl;     
    }

    return 0;
}