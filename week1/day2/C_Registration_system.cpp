#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    map<string,int> name;
    while(t--){
        string s;
        cin>>s;
        if(name[s] == 0){
            cout<<"OK\n";
            name[s]++;
        }else{
            cout<<s<<name[s]<<"\n";
            name[s]++;
        }
    }
    return 0;
}