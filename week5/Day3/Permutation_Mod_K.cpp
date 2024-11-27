#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    if (k == 1) {
        cout << -1 << endl;
        return;
    }

    vector<int> ans(n + 1);
    vector<bool> used(n + 1, false);
    //sob gula one by one position check kore dekhi ki hoy

    for (int i = 1; i <= n; ++i) {
        bool found = false;
        for (int j = 1; j <= n; ++j) {
            if (!used[j] && j % k != i % k) {
                ans[i] = j;
                used[j] = true;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << -1 << endl;
            return;
        }
    }

    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}