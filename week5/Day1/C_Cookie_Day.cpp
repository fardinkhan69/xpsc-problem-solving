#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        int ans = INT_MAX;

        for(int i=0;i<n;i++){
            if(a[i] >= k){
                ans = min(a[i]%k,ans);
            }
        }
        if(ans == INT_MAX){
            cout<<-1<<endl;
        }else{
            cout<<ans<<endl;
        }
        
    }
    return 0;
}