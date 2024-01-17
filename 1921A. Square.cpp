#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int x,y,z,s,a,b,c,d,f;
    cin >>x>>y>>z>>s>>a>>b>>c>>d;
    if(x==z)
    {
        f = abs(s-y);

    }
    else if(x==a)
    {
        f = abs(b-y);
    }
    else if(x==c)
    {
        f = abs(d-y);
    }

cout<<f*f << endl;

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


