#include<bits/stdc++.h>
#define ll long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    if(n>=m && (m-n)%2 == 0)
    {
        yes;
    }else
    {
        no;
    }
}
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}


