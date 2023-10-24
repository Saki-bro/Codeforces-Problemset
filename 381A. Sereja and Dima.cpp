#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int c=0;
    int seraj=0;
    int dima=0;
    int z=0, x=n-1;

    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }

    while(c<= x)
    {
        if(z%2==0)
        {
            if(arr[c] > arr[x])
            {
                seraj += arr[c];
                c++;
            }
            else
            {
                seraj += arr[x];
                x--;
            }
        }
        else
        {
            if(arr[c] > arr[x])
            {
                dima += arr[c];
                c++;
            }
            else
            {
                dima += arr[x];
                x--;
            }
        }
        z++;
    }

    cout<< seraj << " " << dima << endl;
}

