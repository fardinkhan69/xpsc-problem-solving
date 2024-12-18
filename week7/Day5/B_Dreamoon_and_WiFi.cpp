#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int t = 0, d = 0, w = 0;

    for (int i = 0; i < a.length(); i++) {
        d += b[i] == '?';
        t += (a[i] == '+') - (a[i] == '-') - (b[i] == '+') + (b[i] == '-');
    }

    for (int i = 0; i < (1 << d); i++) {
        int c = t, k = i;
        for (int j = 0; j < d; j++) {
            c += (k & 1) ? 1 : -1;
            k >>= 1;
        }
        w += (c == 0);
    }

    cout.precision(20);
    cout << fixed << w / double(1 << d) << endl;
    return 0;
}