#include <iostream>
#include <vector>
#include <algorithm>
#define int long long

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> V(n);
    int a = 1e9, b = 1e9, ans = 0;
    for (int i=0;i<n;i++)
    {
        cin >> i;
        if (a > b)
        {
            swap(a, b);
        }
        if (i <= a)
        {
            a = i;
        }
        else if (i <= b)
        {
            b = i;
        }
        else
        {
            a = i;
            ans++;
        }
    }
    cout << ans << endl;
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
