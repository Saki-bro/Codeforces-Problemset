#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    bool for_a = false, for_b = false;
    vector<int> min1;
    int total = k / 2;
    int a[n], b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    set<int> min_a,min_b;
    for (int i = 0; i < n; i++)
    {
        if(a[i] <= k)
        {
            min_a.insert(a[i]);
        }

    }
    for (int i = 0; i < m; i++)
    {
        if(b[i] <= k)
        {
            min_b.insert(b[i]);
        }

    }

    set<int> result_set;
    set_union(min_a.begin(), min_a.end(), min_b.begin(), min_b.end(), inserter(result_set, result_set.begin()));

    if (min_a.size() < total || min_b.size() < total)
    {
        no;
    }
    else
    {
       if(result_set.size()== k)
       {
           yes;
       }
       else
       {
           no;
       }
    }
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
