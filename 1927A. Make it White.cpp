#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'B')
        {
            v.push_back(i + 1);
        }
    }


    int first = v.front();
    int last = v.back();

    cout << (last - first) + 1 << endl;
}

 main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}
