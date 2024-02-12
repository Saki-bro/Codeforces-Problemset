#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve()
{
    int a,b,k,c,d;
    cin>> a >> b >>k;
    int div = k/2;
    if(k%2 == 0)
    {
        c = a*div;
        d = b*div;
        cout<< c-d <<  endl;
    }
    else
    {
        c = a*(div+1);
        d = b*div;
        cout<< c-d << endl;
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


