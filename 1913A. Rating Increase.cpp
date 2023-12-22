#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int n;
    cin>>n;
    int res=0;int pow=1;
    while(n>0)
    {
        res += pow*(n%10);
        n = n/10;
        if(n!=0 && res>=pow)
        {
            if(res>n)
            {
                cout<< n << " " << res << endl;
                return;
            }
        }
        pow *= 10;
    }
    cout<< -1 << endl;

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



