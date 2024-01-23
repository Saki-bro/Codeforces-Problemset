#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;

void solve()
{
    vector<char> f;
    for(int i = 0; i < 64; i++)
    {
        char n;
        cin >> n;
        if(n != '.')
        {
            f.push_back(n);
        }
    }

    for(char c : f)
    {
        cout << c ;
    }
    cout<< endl;
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
