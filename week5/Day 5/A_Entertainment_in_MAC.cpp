#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        string s;
        cin >> s;
        string sr = s; 

        reverse(sr.begin(), sr.end());
        string s1 = s + sr;
        string s2 = sr + s;

        if (s1.compare(s2) < 0) {
            if (s1.compare(s) < 0) {
                cout << s1 << endl;
            } else {
                cout << s << endl;
            }
        } else {
            if (s2.compare(s) < 0) {
                cout << s2 << endl;
            } else {
                cout << s << endl;
            }
        }
    }
    return 0;
}