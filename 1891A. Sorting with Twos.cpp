#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n];bool f=true;
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1] < arr[i])
        {
            //int a = pow(i,2);
            if(((i+1) & i) != 0)
            {
                f=false;
            }
        }
    }
    if(f)
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



