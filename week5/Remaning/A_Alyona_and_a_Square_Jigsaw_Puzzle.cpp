#include <bits/stdc++.h>

using namespace std;
bool isIt(int num){
    int root = sqrt(num);
    return (root*root == num) && (num%2 != 0);
}

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
        int total = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        for (int i = 0; i < n; i++)
        {
            total += a[i];
            if(isIt(total)){
                ans++;
            }
        }
        
        cout<<ans<<endl;
        
    }
    return 0;
}