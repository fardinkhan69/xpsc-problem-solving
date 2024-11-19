#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll k;
    cin>>n>>k;
    
    ll sum =0;
    int l=0,r=0,ans=0;

    vector<int> v(n);

    for(int i=0;i<n;i++){
       cin >> v[i];
    }

    while(r < n){
        sum += v[r];
        if(sum <= k){
            ans = max(ans,r-l+1);

        }else{
            sum -= v[l];
            l++;
        }
        r++;
    }

    cout<<ans<<endl;
    return 0;
}