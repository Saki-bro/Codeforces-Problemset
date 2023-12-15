#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    string s;
    cin>>s;int f=0;

    for(int i=0;i<5;i++)
    {
        string ar;
        cin>>ar;
        if(s[0]==ar[0] || s[1]==ar[1])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<< "YES"<< endl;
    }
    else
    {
        cout<< "NO"<< endl;
    }

}
  main()
{
    solve();
    return 0;
}




