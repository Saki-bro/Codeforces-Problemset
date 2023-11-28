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
        int k,c=0,odd=0;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            if(k%2 != i%2)
            {
                c++;
            }
            if(k%2)
            {
                odd++;
            }
        }
        if(odd == n/2)
        {
            cout<< c/2 << endl;
        }
        else
        {
            cout<< -1 << endl;
        }
    }
}

