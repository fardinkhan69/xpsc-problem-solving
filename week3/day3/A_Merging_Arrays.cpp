#include <bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<long long int> ans;
    ll t1 = 0, t2 = 0;
    while (t1 < n && t2 < m)
    {
        if (a[t1] < b[t2])
        {
            ans.push_back(a[t1]);
            t1++;
        }
        else
        {
            ans.push_back(b[t2]);
            t2++;
        }
    }
    while (t1 < n)
    {
        ans.push_back(a[t1]);
        t1++;
    }
    while (t2 < m)
    {
        ans.push_back(b[t2]);
        t2++;
    }
    for (int val : ans)
        cout << val << " ";
    return 0;
}