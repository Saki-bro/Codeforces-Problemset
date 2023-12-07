#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    string s;
    cin>>s;
    for(char i='a';i<='h';i++)
    {
        if(i==s[0])
        continue;
            cout<<i<<s[1]<< endl;
    }
    for(char i='1';i<='8';i++)
    {
        if(i==s[1])
            continue;
            cout<<s[0]<<i<< endl;
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



