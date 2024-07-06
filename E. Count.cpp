#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl

/*---------------Bismillah---------------------*/

void solve()
{
    ll n;ll sum=0;
    cin>>n;
    while(n>0)
    {
        sum += n%10;
        n=n/10;
    }
    cout<< sum <<endl;
}

int main()
{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
        solve();
//    }
    return 0;
}



