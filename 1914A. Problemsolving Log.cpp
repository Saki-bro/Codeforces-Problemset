#include<bits/stdc++.h>
#define int long long
using namespace std;

void solved()
 {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> mp(26,0);
        for (int i = 0; i < 26; i++)
        {
            mp[i] = i + 1;
        }

        int c = 0;
        for (char ch : s)
        {
            mp[ch - 'A'] -= 1;
            if (mp[ch - 'A'] == 0)
            {
                c += 1;
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
        solved();
    }
    return 0;
}
