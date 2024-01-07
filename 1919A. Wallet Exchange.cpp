#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    int sum = a+b;
   // cout<< lcm << endl;
   if(sum%2==0)
   {
       cout<< "Bob"<< endl;
   }
   else
   {
       cout<< "Alice"<< endl;
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
