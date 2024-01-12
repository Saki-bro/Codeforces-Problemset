#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int n;
    cin>>n;
    string s;cin>>s;
    if(n>=3)
    {
        cout<< "NO"<< endl;
    }
    else
    {
        if(s=="00" || s=="11")
        {
            cout<< "NO"<< endl;
        }
        else
        {
            cout<< "YES"<< endl;
        }

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


