#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        // I learned or of n and n-1 is always n and xor of n and n-1 is always 1 so n*1 = n  but n should be odd

        cout<<n<<" "<<n-1<<endl;
    }
    return 0;
}