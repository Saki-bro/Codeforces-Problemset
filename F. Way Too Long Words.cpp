#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl

/*---------------Bismillah---------------------*/

void solve()
{
    string s;
    cin>> s;
    int s_size= s.size();

    if(s_size>10)
    cout<< s[0] << s_size-2 << s[s_size-1]<< endl;
    else cout<<s<< endl;
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


