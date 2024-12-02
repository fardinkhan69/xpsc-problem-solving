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
        vector<long long> arr(n);
        vector<long long> pref(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        string s;
        cin >> s;
        pref[0] = arr[0];
        for (int i = 1; i < n; i++)
            pref[i] = pref[i - 1] + arr[i];
        int count = n - 1;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                while (count > i && s[count] != 'R')
                    count--;
                if (count > i)
                {
                    if (i > 0)
                    {
                        ans += pref[count] - pref[i - 1];
                    }
                    else
                    {
                        ans += pref[count];
                    }
                    count--;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}