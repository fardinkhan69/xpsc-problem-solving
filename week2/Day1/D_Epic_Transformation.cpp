#include <bits/stdc++.h>

using namespace std;

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
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            int c;
            cin >> c;
            mp[c]++;
        }
        priority_queue<int> pq;
        for (auto [x, y] : mp)
        {
            pq.push(y);
        }
        while (!pq.empty())
        {
            if (pq.size() < 2)
            {
                break;
            }
            int f = pq.top();
            pq.pop();
            int e = pq.top();
            pq.pop();

            f--;
            e--;
            if (f > 0)
            {
                pq.push(f);
            }
            if (e > 0)
            {
                pq.push(e);
            }
        }
        int ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << "\n";
    }
    return 0;
}