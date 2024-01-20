#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;

void solve()
{
    int arr[3];
    for(int i=0;i<3;i++)
    {
        cin>> arr[i];
    }
    sort(arr,arr+3,greater<int>());
    int ans = arr[0]+arr[1];
    if(ans>=10)
    {
        yes;
    }
    else
    {
        no;
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



