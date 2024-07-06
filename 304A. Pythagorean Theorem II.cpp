#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

/*---------------Bismillah---------------------*/

void solve()
{
    int n;
    cin >> n;
    int c = 0;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = i; j <= n; ++j)
        {
            int k = sqrt(i * i + j * j);
            if (k <= n && k * k == i * i + j * j)
            {
                c++;
            }
        }
    }

    cout << c << endl;
}

int main()
{
    solve();
    return 0;
}
