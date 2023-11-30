#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>> arr[i];
        }

        int top = 0;
        int sec = 0;
        bool equal=true;

        for(int i=0;i<n;i++)
        {
            if(arr[i] > top)
            {
                sec = top;
                top = arr[i];
            }
            else if(arr[i]>sec && arr[i]<top)
            {
                sec=arr[i];
            }
            if(arr[i] != arr[0])
            {
                equal = false;
            }
        }

        if(equal)
        {
            for(int i=0;i<n;i++)
            {
                cout<< "0 ";
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(top!=arr[i])
                {
                    cout<<arr[i] - top<< " ";
                }
                else
                {
                cout<<  top - sec<< " ";
                }
            }
        }

        cout<< endl;

    }
}
