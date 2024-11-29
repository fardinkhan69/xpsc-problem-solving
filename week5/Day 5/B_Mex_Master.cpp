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
        int n;
        cin>>n;

        vector<int> a(n);
        int zeroCnt = 0,maxi = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]==0){
                zeroCnt++;
            }
            maxi = max(maxi,a[i]);
        }

        if(zeroCnt <= n-zeroCnt+1){
            cout<<0<<endl;
        }else{
            // if(maxi == 0){
            //     cout<<1<<endl;
            // }else if(maxi == 1){
            //     cout<<2<<endl;
            // }else{
            //     cout<<1<<endl;
            // }
            if(maxi == 1){
                cout<<2<<endl;
            }else{
                cout<<1<<endl;
            }
        }
        
    }
    return 0;
}