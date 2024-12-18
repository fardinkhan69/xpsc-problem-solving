#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> allpali;
    for (int i = 0; i < 32786; i++) {
        string s = to_string(i), temp = s;
        reverse(s.begin(), s.end());
        if (temp == s) allpali.push_back(i);
    }

    int t;
    cin >> t;
    while (t-- > 0) {
        ll n, ans = 0;
        cin >> n;
        vector<int> v(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            ++freq[v[i]];
        }

        for (auto ele : v) {
            for (auto pali : allpali) {
                ans += freq[ele ^ pali];
            }
        }

        cout << ans << endl;
    }

    return 0;
}