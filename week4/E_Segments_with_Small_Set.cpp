#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0, r = 0;
    map<int, int> st;
    long long ans = 0;
    while (r < n)
    {
        st[v[r]]++;
        if (st.size() <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            while (st.size() > k && l <= r)
            {
                st[v[l]]--;
                if (st[v[l]] == 0)
                {
                    st.erase(v[l]);
                }

                l++;
            }
            if (st.size() <= k)
            {
                ans += r - l + 1;
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}