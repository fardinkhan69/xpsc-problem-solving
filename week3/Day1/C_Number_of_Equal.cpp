#include <bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;

    }
    ll sum = 0;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        sum += mp[x];
    }
    cout<<sum;
    return 0;
}