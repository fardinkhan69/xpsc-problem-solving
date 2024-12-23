#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int maxDifference = 0;

        for (int i = 0; i < n; ++i) {
            int netGain = a[i] - (i + 1 < n ? b[i + 1] : 0);
            if (netGain > 0) {
                maxDifference += netGain;
            }
        }

        cout << maxDifference << "\n";
    }

    return 0;
}
