#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;

        ll totalCycle = a + b + c;
        ll left = 1, right = n, result = n;
        while (left <= right)
        {
            ll mid = (left + right) / 2;
            ll cc = mid / 3;
            ll remainingDays = mid % 3;

            long long totalDurotto = cc * totalCycle;
            if (remainingDays >= 1)
                totalDurotto += a;
            if (remainingDays >= 2)
                totalDurotto += b;

            if (totalDurotto >= n)
            {
                result = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        cout << result << "\n";
    }

    return 0;
}
