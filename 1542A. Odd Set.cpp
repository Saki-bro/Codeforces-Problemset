#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int o=0;
    int e=0;
    int a=2*n;
    int arr[a];bool f = true;
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if(e==o)
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




