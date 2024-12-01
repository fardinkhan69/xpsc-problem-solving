#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n), hei(n);
    for (ll i = 0; i < n; i++) cin >> arr[i];
    for (ll i = 0; i < n; i++) cin >> hei[i];

    ll curr = 0, ans = 0;
    ll left = 0;

    for (ll right = 0; right < n; right++) {
       
        if (right > 0 && hei[right - 1] % hei[right] != 0) {
            curr = 0;
            left = right;  
        }
        curr += arr[right];

        while (curr > k) {
            curr -= arr[left++];
        }

        ans = max(ans, right - left + 1);
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
