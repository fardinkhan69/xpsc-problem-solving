#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        int case1 = v[n-2] - v[1];
        int case2 = v[n-3] - v[0];
        int case3 = v[n-1] - v[2];

        int ans = min(case3,min(case1,case2));

        cout<<ans<<endl;
    }
    return 0;
}