#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin>>a;
        string ans = "";
        for(int i=a.size()-1;i>=0;i--){
            if(a[i] == 'p'){
                ans += "q";
            }else if(a[i] == 'w'){
                ans += "w";
            }else{
                ans += "p";
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}