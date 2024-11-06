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

    int n;
    cin>>n;

    multiset<int> ms;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ms.insert(x);
    }
    int day = 1, ans = 0;

    while(!ms.empty()){
        auto LB = ms.lower_bound(day);
        if(LB != ms.end()){
            ans++;
            ms.erase(LB);
        }else{
            break;
        }
        day++;
    }
    cout<<ans<<nl;
    
    return 0;
}