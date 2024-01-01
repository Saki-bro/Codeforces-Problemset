#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s, ans="";
    cin>>s;

    ans = s[0];
    for(int i=1;i<n;i++)
    {
        if(s[i]=='b' || s[i]=='c' || 'd')
        {
            if(s[i+1]=='a' || s[i+1]=='e')
            {
                ans +='.';
                ans +=s[i];
            }
            else
            {
                ans +=s[i];
            }
        }
        else
        {
            ans +=s[i];
        }
    }
    cout<< ans << endl;

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

