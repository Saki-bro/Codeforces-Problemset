#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int arr[n];
    int gift[n];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        gift[arr[i]] = i;
    }
    for(int i=1; i<=n;i++)
    {
        cout<< gift[i]<< " ";
    }
}
