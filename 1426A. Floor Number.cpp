#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int n,x;
    cin>> n>>x;int ans;
    int c=1;
    //int modu=n%x;
    //int floor = n/x;
    if(n<3)
    {
        cout<<1<< endl;
    }
    else
    {
        int a=n-2;
       while(a>x)
       {
           a=a-x;
           c++;
       }
       cout<< c+1<< endl;
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




