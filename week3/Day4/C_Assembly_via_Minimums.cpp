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
        cin >> n;
        int sz = (n*(n-1))/2;
        vector<int> v(sz);
        vector<long long> a(n);
        for(int i=0;i<sz;i++){
            cin>>v[i];

        }

        sort(v.begin(),v.end());
        int x = 1; int ind = 0;
        int j = n-x;
        while(n-x >0){
            a[ind++] = v[j-1];
            x++;
            j += n - x;
        }
        a[n-1] = v.back()+1;
        for(int val:a)
            cout<<val<<" ";
        cout<<endl;
        
    }
    return 0;
}