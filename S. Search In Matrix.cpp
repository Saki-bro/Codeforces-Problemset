#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl

/*----------------------------------*/
bool isExist[100123];
void solve()
{
    int n,m;cin>> n>>m;
    int arr[n][m];

    //memset(isExist, false, sizeof(isExist));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>> arr[i][j];
            isExist[arr[i][j]] = true;
        }
    }
    int x, c=0; cin>>x;


    if(isExist[x])
    {
        cout<< "will not take number"<< endl;
    }
    else
    {
        cout<< "will take number" << endl;
    }
}
int main()
{
    solve();
    return 0;
}
