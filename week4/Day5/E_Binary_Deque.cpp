#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;

        vector<int> a(n);
        long long int validSum = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            validSum += a[i];

        }
        if(validSum < s){
            cout<<-1<<endl;
            continue;
        }

        int l=0,r=0;
        long long sum = 0;
        int maxi = 0;
        while(r<n){
            sum += a[r];
            
            while(sum > s){
                sum -= a[l];
                l++;
            }
            if(sum == s){
                maxi = max(maxi,r-l+1);

            }

            r++;

        }
        cout<<n-maxi<<endl;
        
    }
    return 0;
}