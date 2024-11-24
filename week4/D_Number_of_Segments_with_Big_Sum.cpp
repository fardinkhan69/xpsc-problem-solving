#include <bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll s;
    cin>>n>>s;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    ll l=0,r=0,sum=0;
    ll ans = 0;
    while(r<n){
        sum += v[r];
        while(sum >= s){
            ans += (n-r);
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}