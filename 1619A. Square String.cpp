#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    string s;
    cin>>s;
    //vector<string>ss;
    int sizee=s.size();
    int mid=sizee/2;
    if(sizee%2==0)
    {
        bool f=true;
        for(int i=0;i<mid;i++)
        {
           if(s[i] != s[i+mid])
           {
               f=false;
           }
        }
        if(f)
        {
            cout<<"YES"<< endl;
        }
        else
        {
            cout<< "NO"<< endl;
        }
    }
    else
    {
        cout<< "NO"<<endl;
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




