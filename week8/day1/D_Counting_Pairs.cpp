#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        ll x, y;
        cin >> n >> x >> y;

        vector<ll> a(n);
        ll totalSum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            totalSum += a[i];
        }

        ll L = totalSum - y, R = totalSum - x;
        sort(a.begin(), a.end()); 

        ll count = 0;

        for (int i = 0; i < n; i++) {
            int left = i + 1, right = n - 1;

            while (left <= right) {
                int mid = (left + right) / 2;
                if (a[i] + a[mid] >= L) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            int low = left;

            left = i + 1, right = n - 1;
            while (left <= right) {
                int mid = (left + right) / 2;
                if (a[i] + a[mid] <= R) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
            int high = right;

            if (low <= high) {
                count += (high - low + 1);
            }
        }

        cout << count << "\n";
    }

    return 0;
}
