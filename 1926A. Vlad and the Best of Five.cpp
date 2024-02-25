#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve()
{
    string s;int A=0,B=0;
    cin>>s;
    for(int i=0;i<5;i++)
    {
        if(s[i]=='A')
            A++;
        else
            B++;
    }
    if(A>B)
        cout<< "A"<< endl;
    else
       cout<< "B"<< endl;
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


