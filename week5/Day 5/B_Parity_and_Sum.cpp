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
        vector<int>a(n);
        int cntEven = 0,cntOdd = 0,maxEven = 0, maxOdd=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                cntEven++;
                maxEven = max(maxEven,a[i]);
            }else{
                cntOdd++;
                maxOdd = max(maxOdd,a[i]);
            }

        }

        sort(a.begin(),a.end());

        for(int i=0;i<n;i++){
            if(a[i]%2 == 0 && a[i] < maxOdd){
                maxOdd += a[i];
            }
        }

        if(cntEven == n || cntOdd == n){
            cout<<0<<endl;
        }else if(maxEven < maxOdd){
            cout<<cntEven<<endl;
        }else{
            cout<<cntEven+1<<endl;
        }

    }
    return 0;
}