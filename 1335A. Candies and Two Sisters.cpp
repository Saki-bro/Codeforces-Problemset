#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>> n;

        long long ans = n/2;
        long long ans2 = n%2;

        if(ans2 != 0)
        {
            cout<< (n - (ans+1)) << endl;
        }
        else
        {
            cout<< ans-1 << endl;
        }
    }
}
