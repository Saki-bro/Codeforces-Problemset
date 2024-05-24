#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve()
{
    int p1,p2,p3;cin>>p1>>p2>>p3;
    int sum = p1+p2+p3;
    if(sum%2 != 0)
    {
        cout<< -1 << endl;
    }
    else
    {
        cout<< min(sum/2,p1+p2) << endl;;
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
