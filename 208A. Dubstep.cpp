#include <bits/stdc++.h>
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<string> vs;
    string a = "WUB";
    for (int i = 0; i < s.size();)
    {
        if (s.substr(i, 3) != a)
        {
            string substr;
            while (i < s.size() && s.substr(i, 3) != a)
            {
                substr += s[i];
                i++;
            }
            vs.push_back(substr);
        }
        else
        {
            i += 3;
        }
    }
    for (auto c : vs)
    {
        cout << c << " ";
    }
}

main()
{
    solve();
    return 0;
}
