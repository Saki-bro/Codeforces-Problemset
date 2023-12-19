#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int n,m;
    cin>>n>>m;
    int minimum=min(n,m);
    cout<< (n*m)/minimum<< endl;

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




