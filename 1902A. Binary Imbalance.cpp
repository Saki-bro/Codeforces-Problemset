#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, c = 0;
        cin >> n;
        string s;
        cin>>s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cout<< "YES"<< endl;
                c++;
                break;
            }
        }
        if (c == 0)
        {
            cout << "NO" << endl;
        }

    }

    return 0;
}
