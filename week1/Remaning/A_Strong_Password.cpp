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
        string s;
        cin>>s;
        int n = s.size();
        int case1 = -1;
        for(int i=0;i<n-1;i++){
            if(s[i] == s[i+1]){
                case1 = i;
            }

        }

        if(case1 == -1){
            if(s.back() == 'z'){
                cout<<s+"x"<<endl;
            }else{
                cout<<s+"z"<<endl;
            }
        }else{
            string add = "z";
            if(s[case1] == 'z'){
                add = "x";
            }

            string ans = s.substr(0,case1+1) + add + s.substr(case1+1);

            cout<<ans<<endl;

        }
    }
    return 0;
}