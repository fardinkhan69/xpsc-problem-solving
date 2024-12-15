#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> inputArray(n);
    for (int i = 0; i < n; i++)
    {
        cin>> inputArray[i];
    }
    
    vector<bool> isUsed(200001, false);
    vector<int> frequency(200001, 0);
    int smallestUnused = 1;

    for (int value : inputArray) isUsed[value] = true;

    for (int value : inputArray) {
        if (frequency[value] == 0) {
            cout << value << " ";
            frequency[value]++;
        } else {
            while (isUsed[smallestUnused]) smallestUnused++;
            cout << smallestUnused << " ";
            isUsed[smallestUnused] = true;
        }
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;
    while (testCases--) {
        solve();
    }

    return 0;
}
