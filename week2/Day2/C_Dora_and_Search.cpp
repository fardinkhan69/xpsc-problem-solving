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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(a[i]);
        }
        int flag = 0;
        int ii = 0;
        int j = n - 1;
        while (1)
        {

            int mx = *s.rbegin();
            int mn = *s.begin();
            flag = 0;
            if(mn == a[ii] || mx == a[ii]){
                s.erase(a[ii]);
                ii++;
                flag = 1;

            }
            if(mn == a[j] || mx == a[j]){
                s.erase(a[j]);
                j--;
                flag = 1;
            }
            if(flag == 0 || ii > j){
                break;
            }
        }
        if(ii > j){
            cout<<-1<<endl;
        }else{
            cout<<ii+1<<" "<<j+1<<endl;
        }
    }
    return 0;
}