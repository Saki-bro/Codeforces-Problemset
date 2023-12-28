#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int n;int sum=0;int res; double res1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
        sum +=arr[i];
    }
    res = sqrt(sum);
    //cout<< res<< endl;
    res1 = sqrt(sum);
    if(res==res1)
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

