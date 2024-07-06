#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl

/*---------------Bismillah---------------------*/

void solve()
{
    ll n;cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
      cin>> arr[i];
    }
    ll pre = arr[0];ll sum=0; ll maxx=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<pre)
        {
            sum+= pre-arr[i];
            maxx = max(maxx,pre-arr[i]);
        }
        else
        {
            pre = arr[i];
        }
    }

    cout<< sum+maxx << endl;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
  solve();
    }
    return 0;
}
