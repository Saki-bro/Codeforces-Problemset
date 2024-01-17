#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;

void solve()
{
    int r,b,d;
    cin>> r >> b >> d;
    //int ans = abs(r-b);
    //int s = r*(d+1);
    if(r<b)
    {
        swap(r,b);
    }
    int ans = r-b;
    if((ans+b-1) / b <= d)
    {
        yes;
    }
    else
    {
        no;
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


