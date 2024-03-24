#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve(int t)
{
    vector<int>v;
    int arr[t],count_decreasing=0;
    for(int i=0; i<t; i++)
    {
        cin>> arr[i];
    }

    for(int i=1; i<t; i++)
    {
        if(arr[i] >= arr[i-1])
        {
            count_decreasing++;
        }
        else
        {
            v.push_back(count_decreasing);
            count_decreasing = 0;
        }
    }
    v.push_back(count_decreasing);
    sort(v.begin(), v.end(), greater<int>() );
    cout<< v[0]+1<< endl;


}
main()
{
    int t;
    cin>>t;
    solve(t);
    return 0;
}

