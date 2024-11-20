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
        string s;
        cin>>s;
        int i=0,cnt1=0,cnt0=0;
        while(i<n){
            
            if(s[i]=='1'){
                cnt1++;
                while(s[i]=='1' && i<n){
                    i++;
                }
            }else{
                cnt0++;
                while(s[i]=='0' && i<n){
                    i++;
                }
            }
        }
        cout<<min(cnt1,cnt0)<<endl;
    }
    return 0;
}