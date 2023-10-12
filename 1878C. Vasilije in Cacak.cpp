#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    int ans;
    while(t--)
    {
        long long n,k,x;
        cin>> n >> k >> x;

        long long ans = (k*(k+1))/2;
        long long ans1 = (n-k+n+1)*k/2;
        if(ans > x || ans1 <x)
        {
            cout<< "NO" << endl;
        }
        else
        {
            cout<< "YES" << endl;
        }
    }
}

