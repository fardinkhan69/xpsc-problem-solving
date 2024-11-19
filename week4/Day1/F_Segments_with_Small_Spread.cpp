#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    ll k;
    cin >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // feeling so much deepresed its me who's feelings are getting hurt all the time. How can she think herself right all the time and she don't even have the fear to loose me she could leave me over a small argument getting up from bed feel like a work I wish allah give me the strength and do whats well for me 

    int l = 0, r = 0;
    ll sum = 0, ans = 0;
    multiset<ll> ml;

    while (r < n)
    {
        ml.insert(a[r]);
        ll mn = *ml.begin();
        ll mx = *ml.rbegin();
        if (mx - mn <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            while (l <= r)
            {
                mn = *ml.begin();
                mx = *ml.rbegin();
                if (mx - mn <= k)
                    break;
                ml.erase(ml.find(a[l]));
                l++;
            }
            if (mx - mn <= k)
            {
                ans += r - l + 1;
            }
        }
        r++;
    }
    cout<<ans<<endl;

    return 0;
}