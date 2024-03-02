#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string strNumber = to_string(n);
    bool containsOnlyFourAndSeven = true;
    for (char digit : strNumber)
    {
        if (digit != '4' && digit != '7')
        {
            containsOnlyFourAndSeven = false;
            break;
        }
    }
    if(n%4==0 || n%47==0 || n%744==0 || n%7==0)
    {
        yes;
    }
    else if(containsOnlyFourAndSeven)
    {
        yes;
    }
    else
    {
        no;
    }

}
  main()
{
    solve();
   return 0;
}
