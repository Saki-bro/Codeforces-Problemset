#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int n,f,a,b;int c =0;
    cin>>n>>f>>a>>b;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int all;
    for(int i=0;i<n;i++)
    {
        int ans = abs(arr[i] - c)*a;
        all = min(b,ans);
        f -= all;
        c = arr[i];
    }
    if(f>0)
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

