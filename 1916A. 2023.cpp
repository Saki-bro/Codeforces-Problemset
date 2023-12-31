#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int n,k;
    cin>>n>>k;
    int arr[n];int c=1;bool f=false;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        c *= arr[i];
    }
    if(2023 % c==0 && c<=2023)
        {
            cout<< "YES"<< endl;
            cout<<(2023/c)<< ' ';
            for(int i=0;i<k-1;i++)
            {
                cout<< "1 ";
            }
            cout<< endl;
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

