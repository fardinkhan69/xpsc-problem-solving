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
        vector<int> a(n);
        for(int i =0;i<n;i++){
            cin>>a[i];
        }

        for(int i =0;i<n;i++){
            int sz;
            cin>>sz;
            string s;
            cin>>s;
            
            for(int j = 0;j<sz;j++){
                if(s[j] == 'D'){
                    a[i]++;
                    if(a[i] == 10)
                        a[i] = 0;
                }
                else if(s[j] == 'U'){
                    a[i]--;
                    if(a[i] == -1)
                        a[i] = 9;
                }
            }
        }
        for(int val:a)
            cout<<val<<" ";

        cout<<endl;
    }
    return 0;
}