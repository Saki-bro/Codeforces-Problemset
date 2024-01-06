#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int l,r;
    cin>> l >> r ;

    if(l*2 > r)
    {
        cout<< -1 << " " << -1 << endl;
    }
    else
    {
        cout << l << " " << l*2 << endl;
    }
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


