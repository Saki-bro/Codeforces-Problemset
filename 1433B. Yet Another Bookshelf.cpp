#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int n,l=0,r=0;
        cin>> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                l = i;
                break;
            }
        }
        for(int i=n;i>0;i--)
        {
            if(arr[i]==1)
            {
                r = i;
                break;
            }
        }
        int ans = 0;
        for(int i=l;i<=r;i++)
        {
            ans += (arr[i]==0);
        }
        cout<< ans<< endl;
    }
}

