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
        char c;
        string s;
        cin>>n>>c>>s;
        s += s;
        int flag = 0;
        int count =0;
        int ans = 0;
        if(c == 'g'){
            cout<<0<<endl;
        }else{
            for(int i=0;i<s.size();i++){
                if(s[i] == 'g'){
                    ans = max(ans,count);
                    flag = 0;
                }
                if(s[i] == c && flag==0){
                    flag = 1;
                    count = 0;
                }
                if(flag==1){
                    count++;
                }
            }
            cout<<ans<<endl;
        }
        

    }
    return 0;
}