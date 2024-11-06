#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    string nm = "Timur";
    sort(nm.begin(),nm.end());
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;

        sort(a.begin(),a.end());
        if(a == nm)
            cout<<"YES\n";
        else
            cout<<"NO \n";
    }
    return 0;
}