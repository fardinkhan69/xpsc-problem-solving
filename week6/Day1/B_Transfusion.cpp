#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % n == 0)
        {
            ll target = sum / n;
            ll evenSum = 0, oddSum = 0;
            int evnCnt = 0, oddCnt = 0;
            for (int i = 0; i < n; i += 2)
            {
                evenSum += a[i];
                evnCnt++;
            }
            for (int i = 1; i < n; i += 2)
            {
                oddCnt++;
                oddSum += a[i];
            }

            if (evenSum / evnCnt == target && oddSum / oddCnt == target)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}