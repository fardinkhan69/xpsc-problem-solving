#include <bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += abs(v[i]);
        }
        bool flag = false;
        ll op = 0;
        for (ll i = 0; i <= n; i++)
        {
            if (flag)
            {
                if (i == n || v[i] > 0)
                {
                    op++;
                    flag = false;
                }
            }
            if (v[i] < 0)
            {
                flag = true;
            }
        }
        cout << sum << " " << op << endl;
    }
    return 0;
}