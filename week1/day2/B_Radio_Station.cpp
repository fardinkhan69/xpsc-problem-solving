#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;
    map<string,string> s;

    for(int i=1;i<=n;i++){
        string a,b;
        cin>>a>>b;
        s[b] = a;
    }

    for(int i=1;i<=m;i++){
        string c,d;
        cin>>c>>d;
       
        cout<<c<<" "<<d<<" #";
        d.pop_back();
        cout<<s[d]<<"\n";
    }
    return 0;
}