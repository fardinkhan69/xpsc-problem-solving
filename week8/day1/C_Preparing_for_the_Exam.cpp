#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(m), q(k);
        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < k; i++) {
            cin >> q[i];
        }

        if (k == n) {
            // Monocarp sob jane tai sob pass
            for (int i = 0; i < m; i++) {
                cout << "1";
            }
            cout << "\n";
            continue;
        }

        set<int> known(q.begin(), q.end());

        if (k == n - 1) {
            // mono carp kichui pare na

            int missing = -1;
            for (int i = 1; i <= n; i++) {
                if (known.find(i) == known.end()) {
                    missing = i;
                    break;
                }
            }

            for (int i = 0; i < m; i++) {
                if (a[i] == missing) {
                    cout << "1";
                } else {
                    cout << "0";
                }
            }
            cout << "\n";
            continue;
        }

        // mono carp jane olpo but ei diye hobe na
        for (int i = 0; i < m; i++) {
            cout << "0";
        }
        cout << "\n";
    }

    return 0;
}
