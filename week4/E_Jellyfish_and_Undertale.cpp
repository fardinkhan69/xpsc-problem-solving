#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;

        long long ans = 0;
        ans = b;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            if(v[i] + 1 <= a){
                ans += v[i];
            }else{
                ans += a-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}