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

        string s = "";
        if (n % 2 == 0)
        {
            for (int i = 1; i <= n/2; i++)
            {
                if(i%2 == 0){
                    s += "BB";
                }else{
                    s += "AA";
                }
            }
            cout<<"YES\n"<<s<<endl;
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}