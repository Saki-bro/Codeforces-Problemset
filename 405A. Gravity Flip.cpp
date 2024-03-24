#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve(int t)
{
    int arr[t];
    for(int i=0; i<t; i++)
    {
        cin>> arr[i];
    }
    sort(arr,arr+t);
    for(int i=0; i<t; i++)
    {
        cout<< arr[i]<< " ";
    }
    cout<< endl;
}
main()
{
    int t;
    cin>>t;
    solve(t);
    return 0;
}

