#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;string a, b;
       cin >> n >>a >>b;
       int cnt1= 0, cnt2= 0;
       for (int i= 0; i< n; ++i)
        {
            if (a[i] == '0' && a[i] != b[i]) cnt1++;
            if (b[i] == '0' && b[i] != a[i]) cnt2++;
        }
        cout << max(cnt1, cnt2) <<endl;
}
  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}


