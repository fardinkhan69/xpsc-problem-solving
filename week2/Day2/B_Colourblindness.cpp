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
        string s1,s2;
        cin>>s1>>s2;
        int flag = 1;
        for(int i =0;i<n;i++){
            if(s1[i] == 'R'){
                if(s1[i]!=s2[i]){
                    flag = 0;
                    break;
                }
            }else{
                if((s1[i] == 'B' || s1[i] == 'G') && (s2[i] == 'B' || s2[i] == 'G')){
                    continue;
                }else{
                    flag=0;
                    break;
                }
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}