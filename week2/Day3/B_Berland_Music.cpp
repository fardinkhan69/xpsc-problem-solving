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
        vector<int> p(n);
        vector<int> q(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            mp[p[i]] = i;
        }
        // 1 releted gular position bair kora lagbe
        // 0 related gular position bair kora lagbe

        vector<int> good;
        vector<int> bad;
        string s;
        cin>>s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                bad.push_back(p[i]);
            }
            else
            {
                good.push_back(p[i]);
            }
        }
        sort(p.begin(), p.end(), greater<int>());
        sort(good.begin(), good.end(), greater<int>());
        sort(bad.begin(), bad.end(), greater<int>());

        // sob gula sort korlam karon sobcheye boro gula 1 er ghore bosbe
        // then sobcheye boro 1 wala tar jaygay sob cheye boro value bosabo jeno p-q minimum hoy 

        int point = 0;
        for (int i = 0; i < good.size(); i++)
        {
            int pos = mp[good[i]];
            q[pos] = p[point];
            point++;
        }
        for (int i = 0; i < bad.size(); i++)
        {
            int pos = mp[bad[i]];
            q[pos] = p[point];
            point++;
        }
        for(int val:q)
            cout<<val<<" ";
        cout<<endl;
    }
    return 0;
}