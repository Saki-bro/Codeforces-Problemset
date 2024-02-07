#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;

void solve()
{
    int n;
    cin>>n;int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    string s;
    vector <int> store(26);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(store[j] == arr[i])
            {
                store[j]++;
                s.push_back(j+'a');
                break;
            }
        }
    }
    cout<< s << endl;
}

 main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

