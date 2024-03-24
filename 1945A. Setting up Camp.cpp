#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve()
{
    int a,b,c, total_tent=0;
    cin>> a >> b >> c;
    int div_three = b%3;
    int ans = (b+2)/3*3-b;
    /*double bb = static_cast<double>(b) / 3;
    int cc = c/3;
    double dd = static_cast<double>(c) / 3;
    //cout<< cc << " "<< dd << endl;
    //*/
    int its_neg = div_three+c;
    if(div_three != 0 && its_neg<3)
    {
        cout<< "-1" << endl;
    }
    else
    {
        cout<< a+(b+2)/3 + (c-ans+2)/3 << endl;
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

