#include <iostream>

using namespace std;

int main()
{
    int test;
    cin >> test;

    for (int t = 0; t < test; t++)
    {

        int a[26] = {0};
        string b;

        int n;
        cin >> n;
        cin>>b;
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> b[i];
        // }
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            int pos = b[i] - 'A';
            if (a[pos] == 1 && i > 0)
            {
                if (b[i - 1] == b[i])
                {
                    continue;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                a[pos] = 1;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}