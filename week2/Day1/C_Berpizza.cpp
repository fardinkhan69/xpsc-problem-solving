#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int customerNum = 1;
    set<pair<int, int>> mono;
    multiset<pair<int, int>> poly;
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int money;
            cin >> money;
            mono.insert({customerNum, money});
            poly.insert({money, -customerNum});
            customerNum++;
        }
        else if (type == 2)
        {
            int pos = mono.begin()->first;
            int money = mono.begin()->second;
            ans.push_back(pos);
            mono.erase({pos, money});
            poly.erase({money, -pos});
        }
        else
        {
            int money = poly.rbegin()->first;
            int pos = -poly.rbegin()->second;
            ans.push_back(pos);
            poly.erase(--poly.end());
            mono.erase({pos, money});
        }
    }
    for (auto value : ans)
    {
        cout << value << " ";
    }
    cout << '\n';
    return 0;
}