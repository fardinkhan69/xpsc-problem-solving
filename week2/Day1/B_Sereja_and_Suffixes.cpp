#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int m;
    cin>>m;

    vector<int>a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    vector<int> ans(n+1);
    set<int> s;
    for(int i = n;i>=1;i--){
        s.insert(a[i]);
        ans[i] = s.size();
    }
    for(int i = 1;i<=m;i++){
        int pos;
        cin>>pos;
        cout<<ans[pos]<<nl;
    }
    
    return 0;
}