#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin>>n;int num;
    //int arr[n];
    set<int>k;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        k.insert(num);
    }
    int l = k.size();
    if(n==l)
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




