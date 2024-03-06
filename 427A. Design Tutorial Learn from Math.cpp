#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;

bool istrue(int ab)
{
    for(int i=2;i<=sqrt(ab);i++)
    {
        if(ab%i==0)
        {
            return true;
        }
    }
    return false;
}

void solve(int sum)
{

    for(int i=2;i<=sum/2;i++)
    {
        int number = sum - i;
        if(istrue(i) && istrue(number))
        {
            cout<<number << " " << i << endl;
            break;
        }
    }
}
  main()
{
    int n;
    cin>>n;
    solve(n);
   return 0;
}
