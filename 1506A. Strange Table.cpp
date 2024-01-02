#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int n,m,x;
    cin>>n>>m>>x;
    int a = x-1;
    int b = a%n;
    int c = (a-b)/n;
    int ans = b*m+c;
    cout<< ans+1 << endl;

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


