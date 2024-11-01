#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    map<string,bool> name;
    while(t--){
        
        string s;
        cin>>s;

        if(name[s]==true){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
            name[s] = true;
        }

    }
    return 0;
}