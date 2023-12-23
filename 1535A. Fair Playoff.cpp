#include<bits/stdc++.h>
//#define int long long
using namespace std;

void solve()
{
    //int s1,s2,s3,s4;
    //cin>> s1>>s2>>s3>>s4;
    int s[4];
    for(int i=0;i<4;i++)
    {
        cin>>s[i];
    }
    bool b = false;
    int f = max(s[0],s[1]);
    int ss = max(s[2],s[3]);
    int m = min(f,ss);
    vector<int>ar;
    //cout<< f << " " << ss << " " << m << endl;
    for(int i=0;i<4;i++)
    {
        if(s[i]!=f && s[i]!=ss)
        {
            ar.push_back(s[i]);
        }
    }
    for(auto c: ar)
    {
        if(m<c)
        {
            b = true;
        }
    }
    if(b)
    {
        cout<< "NO"<< endl;
    }
    else
    {
        cout<< "YES"<< endl;
    }
cout<< endl;


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



