#include<bits/stdc++.h>
#define ll long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;

void solve()
{
    int a , b;
    cin>> a>>b;
    cout<< min(a,b) << " " << max(a,b) << endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
