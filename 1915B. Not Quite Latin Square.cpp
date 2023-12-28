#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    char s[9];int a=0,b=0,c=0;
    for(int i=0;i<9;i++)
    {
        cin>>s[i];
        if(s[i]=='A')
        {
            a++;
        }
        else if(s[i]=='B')
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    if(a==2)
    {
        cout<< "A"<< endl;
    }
    else if(b==2)
    {
        cout<< "B"<< endl;
    }
    else
    {
        cout<< "C"<< endl;
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

