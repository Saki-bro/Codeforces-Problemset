#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve()
{
    int a,b,c;
    cin>> a >> b >> c;

    if(a<b && a<c && b<c)
    {
        cout<< "STAIR"<< endl;
    }
    else if(a<b && c<b)
    {
        cout<< "PEAK"<< endl;
    }
    else
    {
        cout<< "NONE"<< endl;
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


