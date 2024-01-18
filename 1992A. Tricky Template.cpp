#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;bool f=false;
    cin>>n;
    string a,b,c;
    cin>> a >> b >> c;

    for(int i=0;i<n;i++)
    {
        if(c[i] == a[i] || c[i] == b[i])
        {
           continue;
        }
        else
        {
            f = true;
        }
    }
    if(f)
    {
        cout<< "YES"<< endl;
    }
    else
    {
        cout<< "NO"<< endl;
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




