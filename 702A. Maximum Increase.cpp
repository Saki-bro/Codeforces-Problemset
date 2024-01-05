#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

void solve()
{

    int n;int c=1;int ans=1;
    cin>>n;
    int arr[n];
    //vector<int>p;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    for(int i=1;i<n;i++)
    {
        if(arr[i] > arr[i-1])
        {
            c++;
        }
        else
        {
            c=1;
        }
       ans = max(ans,c);
    }

    cout<< ans << endl;
    //p.pb(c);

}
  main()
{

        solve();
    return 0;
}


