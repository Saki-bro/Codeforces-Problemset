#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int W,H;
    cin>>W >> H;
    int x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    int t2W,t2H;
    cin>>t2W>>t2H;

    //double t1W = y1-x1;
    //double t1H = y2-x2;
    int  ans1 = t2W+y1-x1;
    int  ans2 = t2H+y2-x2;

    int ans = 1e18;
    if(ans1 <= W)
    {
        ans = min({ans,t2W-x1,y1-W+t2W});
    }
    if(ans2 <= H)
    {
        ans = min({ans,t2H-x2,y2-H+t2H});
    }
    double last=max(0ll,ans);
    if(ans == 1e18)
    {
        cout<< "-1"<< endl;
    }
    else
    {
        cout<< fixed<<setprecision(9)<< last << endl;
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


