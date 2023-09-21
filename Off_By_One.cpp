#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    int a , b;
    cin >> a >> b;
    string s = to_string(a + b) + '1';
    cout << s << endl;
    return 0;
}