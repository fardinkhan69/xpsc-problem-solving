#include <bits/stdc++.h>

using namespace std;
bool yesNo(int n, int k)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            int track = n - i - j;
            if (10 * i + 11 * j + 12 * track == k)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int mx = n * 12;
        int mn = n * 10;
        if (k < mn || k > mx)
        {
            cout << "NO" << endl;
        }
        else
        {
            if(yesNo(n,k)){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}