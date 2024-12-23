#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        // Compute the total product
        long long totalProduct = 1;
        for (int i = 0; i < n; i++)
            totalProduct *= a[i];

        if(totalProduct == 1){
            cout<<1<<endl;
            return 0;
        }

        // Check for the split point
        long long leftProduct = 1;
        bool found = false;

        for (int k = 0; k < n - 1; k++)
        {
            leftProduct *= a[k];
            if (leftProduct == totalProduct / leftProduct)
            {
                cout << k + 1 << endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << -1 << endl;
    }
    return 0;
}
