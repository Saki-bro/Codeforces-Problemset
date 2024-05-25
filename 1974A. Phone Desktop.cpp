#include<bits/stdc++.h>
#define ll long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve()
{
    ll x,y;
    cin>> x>>y;

    if(x==0 && y==0)
    {
        cout<<0<< endl;
    }
    else if(y==0)
    {
        if(x<=15)
        {
            cout<<1 << endl;
        }
        else
        {
            cout<< (x+15-1)/15<<endl;
        }
    }
    else
    {
        ll for_y = y*4;
        ll for_Yscrean = (for_y+8-1)/8;

        ll total_screan = for_Yscrean*15;
        ll rest_cell = total_screan - for_y;

        if(rest_cell < x)
        {
            ll for_Xscrean = x-rest_cell;
            ll total_x = (for_Xscrean+15-1)/15;
            cout<< for_Yscrean+total_x << endl;
        }
        else
        {
            cout<< for_Yscrean<< endl;
        }
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

