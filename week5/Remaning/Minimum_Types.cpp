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
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        vector<int> b(n);

        vector<int> product(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }

        for (int i = 0; i < n; i++)
        {
            product[i] = a[i]*b[i];
        }
        sort(product.begin(),product.end(),greater<int>());
        int total = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            
            if(total >= x){
                break;
            }
            total += product[i];
            count++;
        }
        if(total < x){
            cout<<-1<<endl;
        }else{
            cout<<count<<endl;
        }
        
        
    }
    return 0;
}