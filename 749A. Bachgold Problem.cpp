#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int n;
    cin>>n;
    int a=n/2;
    cout<< a << endl;
    while(n>3)
    {
        cout<< 2 << " ";
        n=n-2;
    }
    cout<< n;

}
  main()
{
    solve();
    return 0;
}




