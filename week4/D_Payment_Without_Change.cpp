#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long int a,b,n,s;
        cin>>a>>b>>n>>s;
        int maxCoinUse = min(s/n,a);
        int remaining = s - maxCoinUse*n;
        if(remaining<=b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}