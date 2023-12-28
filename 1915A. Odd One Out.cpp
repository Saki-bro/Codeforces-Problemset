#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int a,b,c;
    cin>> a>>b>>c;
    if(a==b)
    {
        cout<< c << endl;
    }
    else if(a==c)
    {
        cout<< b << endl;
    }
    else if(b==c)
    {
        cout<< a << endl;
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

