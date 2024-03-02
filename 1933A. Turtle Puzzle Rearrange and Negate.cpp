#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += abs(arr[i]);
    }
    cout<< sum << endl;

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
