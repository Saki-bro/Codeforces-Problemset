#include<bits/stdc++.h>
using namespace std;

    int main()
    {
        int t;
        cin>> t;
        while(t--)
        {
            int n;
            cin>> n;
            int arr[n];
            int ar[n];
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            for(int i=0;i<n;i++)
            {
                ar[i]=arr[i];
            }
            sort(ar,ar+n);
            for(int i=0;i<n;i++)
            {
                if(arr[i] != ar[1])
                {
                    cout<< i+1 << endl;
                }
            }



        }
    }

