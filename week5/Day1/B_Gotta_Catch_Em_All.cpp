#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,np,mp;
        cin>>n>>np>>mp;
        vector<int> v(n);
        int ans = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
        for(int i=0;i<n;i++){
            if(v[i]*np >= mp){
                ans += mp;
            }else{
                ans += (np*v[i]);
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}