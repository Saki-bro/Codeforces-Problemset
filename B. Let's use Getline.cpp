#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl

/*---------------Bismillah---------------------*/

void solve()
{
    string s;
    getline(cin,s);

    vector<string>arr;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '\\')
        {
            break;
        }
        else
        {
            arr.push_back(string(1,s[i]));
        }
    }
    for(const string& ss : arr)
    {
        cout<< ss ;
    }
}

int main()
{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
    solve();
//    }
    return 0;
}
