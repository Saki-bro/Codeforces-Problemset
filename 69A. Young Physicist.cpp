#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;

void solve()
{
    int n,x,y,z,sum_x=0,sum_y=0,sum_z=0;
    cin>> n;
    for(int i=0;i<n;i++)
    {
        cin>> x >> y >>z;
        sum_x+=x;
        sum_y+=y;
        sum_z+=z;
    }
    if(sum_x==0 && sum_y==0 && sum_z==0)
    {
        yes;
    }
    else
    {
        no;
    }
}
 main()
{
    solve();
    return 0;
}
