#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve()
{
    int a,b,m;
    cin>> a>>b>>m;
    cout<<((m/a)+(m/b))+2<< endl;
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

