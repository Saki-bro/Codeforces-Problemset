#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int n;
    cin>>n;
    vector<int>div;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            div.push_back(i);
        }
    }
    cout<< div.size()<< endl;

}
  main()
{
    solve();
    return 0;
}

