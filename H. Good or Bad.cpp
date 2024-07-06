#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl

/*---------------Bismillah---------------------*/

void solve()
{
    string s;int c=0;
    cin>>s;
    for(int i=0;i<s.size()-2;i++)
    {
        if((s[i]== '1' && s[i+1]== '0' && s[i+2]== '1') || (s[i]== '0' && s[i+1]== '1' && s[i+2]== '0'))
        {
            c=1;
            break;
        }

    }
    if(c==1)
    {
        cout<< "Good"<< endl;
    }
    else
    {
        cout<< "Bad" << endl;
    }
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
