#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int n,k;
        cin>> n >> k;
        int a[n];
        bool ans=false;
        for(int i=0; i<n; i++)
        {
            cin>> a[i];
            if(a[i] == k)
            {
                ans = true;
            }
        }
        if(ans==true)
    {
        cout<< "YES" << endl;
    }
    else
    {
        cout<< "NO" << endl;
    }

    }


}

