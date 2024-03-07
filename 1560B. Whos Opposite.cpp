#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve()
{
    int a,b,c,ans;
    cin>> a>> b>>c;
    int n =  2 * abs(a-b);

    if(a>n || b>n || c>n)
        cout<< -1 << endl;
    else{
        ans = (c+n/2)%n;
        if(ans == 0)
        {
            ans = n;
        }
    cout<< ans << endl;
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
