#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int a,b,sum;
    cin>> a>>b;
    if(a==b)
    {
        cout<< 0 << endl;
    }
    else if(a>b)
    {
        sum = a-b;

        if(sum%2==0)
        {
            cout<< 1 << endl;
        }
        else
        {
            cout<< 2 << endl;
        }

    }
    else
    {
        sum = b-a;

        if(sum%2==0)
        {
            cout<< 2 << endl;
        }
        else
        {
            cout<< 1 << endl;
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
