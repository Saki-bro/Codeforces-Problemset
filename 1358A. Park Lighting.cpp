#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int n,m;
    cin>>n>>m;
    int ans = n*m;
    if(ans%2==0)
    {
        cout<< ans/2<< endl;
    }
    else
    {
        cout<< (ans/2)+1<< endl;
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

