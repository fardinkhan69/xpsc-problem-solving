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
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int needed = (n+1)*50;
        int req = needed - sum;

        if (req > 100 )
        {
            cout<<-1<<endl;
        }else if(req <=0){
            cout<<0<<endl;
        }else{
            cout<< req<<endl;
        }
    }
    return 0;
}