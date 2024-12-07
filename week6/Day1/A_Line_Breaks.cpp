#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        int count = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            
            string s;
            cin>>s;
            count += s.size();
            
            if(count <= m){
                ans++;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}