#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>> s;
    vector <int> sum(n+1,0);
    for(int i=1;i<=n;i++)
    {
        sum[i]= sum[i-1] + (s[i-1] - 'a'+1);
    }
    while(q--)
    {
        int l,r;
        cin>> l >>r ;
        int ans = sum[r] - sum[l-1];
        cout<< ans << endl;
    }
    return 0;
}
