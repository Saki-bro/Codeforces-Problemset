#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;

void solve()
{
    int n;int a,b;int best=0,index=0;
    cin>>n;
    //vector<int>f;
    for(int i=0;i<n;i++)
    {
        cin>> a >> b;
        if(b>best && a<=10)
        {
            index = i;
            best = b;
        }

    }
    cout<< index+1 <<  endl;

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



