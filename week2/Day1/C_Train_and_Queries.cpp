#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        map<int,set<int>>mp;
        for(int i =1;i<=n;i++){
            int x;
            cin>>x;
            mp[x].insert(i);
        }
        for(int i =0;i<k;i++){
            int s,e;
            cin>>s>>e;
            if((mp.find(s) == mp.end() || (mp.find(e) == mp.end()))){
                no;
            }else{
                int starting = *mp[s].begin();
                int ending = *mp[e].rbegin();
                if(ending > starting )
                    yes;
                else
                    no;
            }
        }
    }
    return 0;
}