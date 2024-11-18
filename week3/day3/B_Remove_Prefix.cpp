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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        set<int> s;
        int disCount = 0;

        for(int i=n-1;i>=0;i--){
            disCount++;
            s.insert(v[i]);
            if(disCount > s.size()){
                break;
            }
        }
        cout<< n - s.size()<<endl;

    }
    return 0;
}