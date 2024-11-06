#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,x;
    cin>>n>>x;
    vector<int> ans;
    for(int i =0;i<n;i++){
       int in;
       cin>>in;
       if(in != x){
        ans.push_back(in);
       }
    }
    for(int val : ans)
        cout<<val<<" ";
    return 0;
}