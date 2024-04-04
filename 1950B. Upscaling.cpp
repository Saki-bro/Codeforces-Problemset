#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve()
{
    int n;
    cin>>n;

    for(int i=0;i<n*2;i++)
    {
        for(int j=0;j<n*2;j++)
        {
            int x=i/2; int y=j/2;
            if((x%2+y)%2 != 0)
            {
                cout<< '.';
            }
            else
            {
                cout<< '#';
            }
        }
        cout<< endl;
    }
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



