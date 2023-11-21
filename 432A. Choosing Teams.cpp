#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;int c=0;
    cin>> n>>k;
    int arr[n];
    int a[n];
    vector<int>num;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i] + k <= 5)
        {
            c++;
        }
    }
    cout<< c/3 << endl;


}

