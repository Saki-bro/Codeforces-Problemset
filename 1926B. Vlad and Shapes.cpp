#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve()
{
    int n,c=0;;
    cin>>n;
    bool f = false;
    char arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j][i] == '1')
            {
                c++;
            }

        }
        if(c==1)
        {
            f=true;
            break;
        }
    }
    if(f)
    {
        cout<< "TRIANGLE" << endl;
    }
    else
    {
        cout<< "SQUARE"<< endl;
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


