#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int n;int t=0;
    cin>>n;
    for(int i=1;i<=9;i++)
    {
        int c=i;
        while(c<=n)
        {
            t++;
            c=c*10+i;
        }
    }
    cout<< t << endl;

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




