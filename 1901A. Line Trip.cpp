#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int n,x;
        cin>> n >> x;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>> arr[i];
        }
        int c=0;
        c = arr[0];
        for(int i=1;i<n;i++)
        {
            c=max(arr[i]-arr[i-1],c);
        }
        c = max((x-arr[n-1]) * 2, c);
        cout<< c << endl;

    }
}
