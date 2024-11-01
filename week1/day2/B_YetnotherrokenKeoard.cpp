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
        string s;
        cin >> s;

        int sz = s.size();

        vector<int> capital, small;
        //small r capital alada alada indx gula nibo
        //er por b or B onujai ekta ekta kore pop korbo
        //b or B thakle eitay dhukabo na

        vector<bool> ans_idx(sz + 1, true);

        //initially sob true and jegula b diye cancel hobe ogula false 
        //sesh e string e traverse kore j j index er jonno true ase just oigula print korbo
        

        for (int i = 0; i < sz; i++)
        {
            if (s[i] == 'B')
            {
                if (!capital.empty())
                {
                    ans_idx[capital.back()] = false;
                    capital.pop_back();
                }
                ans_idx[i] = false;
            }
            else if (s[i] == 'b')
            {
                if (!small.empty())
                {
                    ans_idx[small.back()] = false;
                    small.pop_back();
                }
                ans_idx[i] = false;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                small.push_back(i);
            }
            else
            {
                capital.push_back(i);
            }
        }

        for (int i = 0; i < sz; i++)
        {
            if (ans_idx[i] == true)
            {
                cout << s[i];
            }
        }
        cout << "\n";
    }
    return 0;
}