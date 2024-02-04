#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;

void solve()
{
    int n,b;
    cin>>n>>b;
    if(n==1)
    {
        yes;
    }
    else if(b==1)
    {
        yes;
    }
    else if(n==2 && b==2)
    {
        yes;
    }
    else
    {
        no;
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

