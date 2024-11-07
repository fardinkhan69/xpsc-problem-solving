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

        map<char,int> mp;
        for(int i =0;i<n;i++){
            mp[s[i]]++;
        }

        int count = 0;
        for(auto [x,y] : mp ){
            if(y % 2 != 0) count++;
        }

        if(count-1 < 0 ) count =0;
        else count = count - 1;

        if(k >= count){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}