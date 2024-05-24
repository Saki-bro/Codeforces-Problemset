#include<bits/stdc++.h>
#define ll long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;

void solve()
{
    string s;
    cin>> s;

    string sorted = s;
    sort(s.begin(),s.end());

    if(s[0] == s.back())
    {
        no;
        return;
    }
    else
    {
        if(s == sorted)
        {
            reverse(s.begin(),s.end());
        }
        yes;
        cout<< s << endl;

    }


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }


    return 0;
}

