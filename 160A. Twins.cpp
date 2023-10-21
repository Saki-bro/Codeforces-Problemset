#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int total=0;
    int count=0;
    int sum=(accumulate(arr,arr+n,0)/2);
    for(int i=0;i<n;i++)
    {
        total+= arr[i];

        if(total <= sum)
        {
            count++;
        }
    }
    if(total == sum)
    {
        cout<< count+1<< endl;
    }
    else
    {
        cout<<count+1<< endl;
    }




}

