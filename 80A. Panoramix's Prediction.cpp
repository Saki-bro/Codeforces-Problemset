#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=n+1;i<m;i++)
    {
        bool f=false;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                f=true;
            }

        }
         if(!f)
            {
                cout<< "NO";
                return 0;
            }
    }
    for(int i=2;i*i<=m;i++)
    {
        if(m%i==0)
        {
            cout<< "NO";
            return 0;
        }
    }
    cout<< "YES"<< endl;
}
