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
        int n, m, h;
        cin >> n >> m >> h;

        vector<ll> car(n);
        vector<ll> power(m);

        for (ll i = 0; i < n; i++)
        {
            cin >> car[i];
        }
        for (ll i = 0; i < m; i++)
        {
            cin >> power[i];
        }

        // besi capacity er gari te boro powerplant er energy dibo

        sort(car.begin(), car.end(), greater<int>());
        sort(power.begin(), power.end(), greater<int>());

        ll x = min(n, m);
        ll ans = 0;
        for (ll i = 0; i < x; i++)
        {
            ans += min(car[i], (power[i] * h));
        }
        cout << ans << endl;
    }
    return 0;
}