#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int mid = n-k;
    for (int i = mid; i <= n; i++)
    {
        cout << i << " ";
    }
    for (int i = mid - 1; i > 0; i--)
    {
        cout << i << " ";
    }
        cout << endl;
}

main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
