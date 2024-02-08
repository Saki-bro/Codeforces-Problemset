#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve()
    {
    int n,c=0;
    cin>>n;
    int x = sqrt(n);
    //cout<< x << endl;
    while(x >= 1)
    {
        while(x*(3*x+1) > 2*n)
        {
            x--;
        }
        if(x >= 1)
        {
            c++;
        }
        n = n-(x*(3*x+1)/2);
    }
    cout<< c << endl;

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

