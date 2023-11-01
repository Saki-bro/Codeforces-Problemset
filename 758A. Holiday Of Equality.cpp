#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int key=arr[n-1];
    int first=arr[0];
    //cout<< first << " "<< key << endl;
    int sum;
    int last=0;
    for(int i=n-1;i>=0;i--)
    {
        sum = key-arr[i];

        last += sum;
    }
    if(n==1)
    {
        cout<< "0"<< endl;
    }
    else
    {
        cout<< last << endl;
    }
}

