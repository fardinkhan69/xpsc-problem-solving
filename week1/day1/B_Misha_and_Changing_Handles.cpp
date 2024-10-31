#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    map<string, string> ans, has;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;

        if (has.find(a) != has.end())
        {
            // tar mane age put hoise ei value so er boos re bair kora lagbe main dorkar nater guru baki chela pela change hobe
            string guru = has[a];
            ans[guru] = b;
            //ager chelar chakri not
            has.erase(a);
            //notun chelar boss assign
            has[b] = guru;
        }
        else
        {
            //first chela 
            ans[a] = b;
            //chealr boss
            has[b] = a;
        }
    }
    for (auto c : ans)
    {
        cout << c.first << " " << c.second << "\n";
    }
    return 0;
}