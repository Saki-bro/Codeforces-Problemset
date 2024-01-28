#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;

void solve()
{
    string s;int i;
        cin>>s;
        int n=s.size();
        for(i=0;i<n;i++){
            if(s[i]!='Y' and s[i]!='e' and s[i]!='s')
                break;
            else if(i==0)
                continue;
            else if(s[i-1]=='e' and s[i]!='s')
                break;
            else if(s[i-1]=='Y' and s[i]!='e')
                break;
            else if(s[i-1]=='s' and s[i]!='Y')
                break;
        }
        if(i==n)
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
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}




