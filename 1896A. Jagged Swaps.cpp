
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
        for(int i=1;i<=n;i++)
        {
            cin>> arr[i];

        }
        if(arr[1]!=1)
            {
               cout<< "NO"<< endl;
            }
            else
            {
                cout<< "YES"<< endl;

            }
    }

}
