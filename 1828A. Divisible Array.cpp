#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;

        if(n%2==0)
        {
            int i=2,count=0;
            while(count!=n)
            {
                cout<<i<<" ";
                count++;
                i=i+2;
            }
            cout<<endl;
        }
        else
        {

            for(int i=1;i<=n;i++)
            {

                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}
