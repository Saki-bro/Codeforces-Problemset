#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve()
{
    int a,b;
    cin>> a>>b;
    int mini = min(a,b);
    int last = abs(a-b)/2;
    cout<< mini << " " << last << endl;

}
  main()
{
    solve();
    return 0;
}
