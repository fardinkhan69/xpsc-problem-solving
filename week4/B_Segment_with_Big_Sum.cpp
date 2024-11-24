#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long k;
    cin>>n>>k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    

    long long l=0,r=0,sum=0;
    long long ans=LLONG_MAX;
    while(r<n){
        sum += v[r];
        while(sum >= k){
            ans = min(ans,r-l+1);
            sum -= v[l];
            l++;
        }
        r++;

    }
    if(ans == LLONG_MAX)
    cout<<-1<<endl;
    else
    cout<<ans<<endl;
    return 0;
}