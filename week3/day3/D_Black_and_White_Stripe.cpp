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
        string s;
        cin>>s;

        int count = 0;
        int l=0,r=0;
        int ans = k;
        while(r<n){
            if(s[r]=='W'){
                count++;             
            }
            if(r-l+1 == k){
                ans = min(ans,count);
                if(s[l]=='W'){
                    count--;
                }
                
                l++;
                r++;

            }else{
                r++;
            }
            
        }
        cout<<ans<<endl;
    }
    return 0;
}