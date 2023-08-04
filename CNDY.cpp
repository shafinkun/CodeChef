#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int num[2 * n];
        bool flag = true;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> num[i];
        }
        for (int i = 0; i < 2 * n; i++)
        {
            int count = 0;
            bool terminate = false;
            for (int j = 0; j < 2 * n; j++)
            {
                if (num[i] == num[j])
                {
                    count++;
                    if (count > 2)
                    {
                        flag = false;
                        terminate = true;
                        break;
                    }
                }
                if (terminate)
                {
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "YES \n";
        }
        else
        {
            cout << "NO \n";
        }
    }
    return 0;
}