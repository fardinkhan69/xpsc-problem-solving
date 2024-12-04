#include <bits/stdc++.h>
using namespace std;
// dp use kore dekhi ki hoy

int flrFind(int a, int k) {
    if (a >= 0) return a / k;
    return (a - k + 1) / k;
}

int ceilFind(int a, int k) {
    if (a >= 0) return (a + k - 1) / k;
    return a / k;
}

bool isIt(vector<int>& a, int k) {
    int n = a.size();
    vector<long long> minSum(n + 1), maxSum(n + 1);
    minSum[0] = maxSum[0] = 0;
    for(int i = 0; i < n; i++) {
        int flr = flrFind(a[i], k);
        int ceil = ceilFind(a[i], k);
        
        minSum[i + 1] = min(minSum[i] + flr, minSum[i] + ceil);
        maxSum[i + 1] = max(maxSum[i] + flr, maxSum[i] + ceil);
    }

    return (minSum[n] <= 0 && maxSum[n] >= 0);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if(isIt(a,k)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}