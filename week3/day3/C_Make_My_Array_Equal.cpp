#include <bits/stdc++.h>

using namespace std;
#define nl cout<<"\n"
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(n==1){
            cout<<"YES"<<endl;
        }else if(n==2){
            if(v[0]==0 || v[1]==0 || v[0] == v[1]){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            bool flag = true;
            int j;
            for(int i=0;i<n-1;i++){
                j=i+1;
                if(v[i]==0){
                    j++;
                    continue;
                }
                if(v[i] != v[j]){
                    flag = false;
                    break;
                }
                j++;
            }
            if(flag)
                cout<<"YES"<<endl;
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}