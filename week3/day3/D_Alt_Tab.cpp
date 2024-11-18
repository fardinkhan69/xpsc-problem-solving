#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    stack<string> st;
    while(t--){
        
        string s;
        cin>>s;
        st.push(s);
    }
    map<string,int> mp;
    while(!st.empty()){
        string top = st.top();
        if(mp[top] == 0){
            cout<<top[top.size()-2]<<top[top.size()-1];
            mp[top]++;
        }
        st.pop();
    }

    return 0;
}