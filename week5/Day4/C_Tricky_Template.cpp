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
        string a,b,c;
        cin>>a>>b>>c;

        bool possible = false;

        for (int i = 0; i < n; i++)
        {
            if(c[i] != b[i] && a[i] != c[i]){
                possible = true;
                break;
            }
        }
        if(possible)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        


    }
    return 0;
}