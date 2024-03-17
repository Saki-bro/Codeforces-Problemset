#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve()
{
    int n,m,k,c=0;
    cin>> n >> m >> k;
    int arr[n],arr2[m];
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>> arr2[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {

            if(arr[i]+arr2[j] <= k)
            {
                c++;
            }
            //j++;
        }
    }
    cout << c << endl;
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

