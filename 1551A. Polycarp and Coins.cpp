#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int  n;
    cin>>n;
    int c2 = n/3;
    int c1 = n-(c2*2);
    int last = abs(c1-c2);
    if(last==2)
    {
        int c2 = (n/3)+1;
        int c1 = n-(c2*2);
        cout<<c1 << " " << c2 << endl;
    }
    else
    {
        cout<< c1 << " "<< c2 << endl;
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



