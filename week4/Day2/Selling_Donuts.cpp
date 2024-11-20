#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //koyjon monmoto pabe na
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n+1);
        vector<int> b(m+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=m;i++){
            cin>>b[i];
        }
        int cnt=0;
        for(int i=1;i<=m;i++){
            int x = b[i];
            if(a[x] != 0){
                a[x] = a[x]-1;
            }else{
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}