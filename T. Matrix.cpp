#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl

/*---------------Bismillah---------------------*/

void solve()
{
    int n;
    cin>> n;
    int arr[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>> arr[i][j];
        }
    }
    int pri_dia=0;
    int sec_dia=0;
    for(int i=0; i<n; i++)
    {
        pri_dia += arr[i][i];
    }
    for(int i=0; i<n; i++)
    {
        sec_dia += arr[i][n-i-1];
    }
    cout<< abs(sec_dia-pri_dia) << endl;
}
int main()
{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
    solve();
//    }
    return 0;
}

