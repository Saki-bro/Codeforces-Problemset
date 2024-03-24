#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve()
{
    string s;int c=0;
    cin>>s;
    //cout<< s << endl;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9' )
        {
            c=1;
        }
    }
        if(c==1)
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


