#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int c=0, b=0;
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]== '+')
        {
            c++;
        }
        else
        {
            b++;
        }
    }
    int ans = max(c,b) - min(c,b);
    cout << ans <<endl;

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
