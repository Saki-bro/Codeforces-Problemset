#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int n;
    cin>>n;
    int arr[n*2];//int j=0;int k=0;
    vector<int>value;
    unordered_set<int>s;

    for(int i=0;i<n*2;i++)
    {
        cin>>arr[i];


        if(s.find(arr[i]) == s.end())
        {
            value.push_back(arr[i]);
            s.insert(arr[i]);
        }
        //cout<< "J:"<<j << " K:"<< k << endl;
    }
    //cout<< arr[0] << " ";
    for(int an: value)
    {
        cout<< an << " ";
    }
    cout<< endl;

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




