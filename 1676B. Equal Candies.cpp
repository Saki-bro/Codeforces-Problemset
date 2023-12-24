#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    sort(arr,arr+n);
    int s = arr[0];int f=0;
    for(int i=0;i<n;i++)
    {
        f += arr[i]-s;
    }
    cout<< f << endl;
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
