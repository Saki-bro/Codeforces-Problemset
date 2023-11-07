#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int a,b,c;
        cin>> a >> b >>c;
        int m = max(a,max(b,c));

        if(a==m)
        {
            if(b==m || c==m) cout<<m-a+1;
            else cout<< m-a;
        }
        else
        {
            cout<< m-a+1;
        }
        cout<< " ";

        if(b==m)
        {
            if(a==m || c==m) cout<<m-b+1;
            else cout<< m-b;
        }
        else
        {
            cout<< m-b+1;
        }
        cout<< " ";
        if(c==m)
        {
           if(a==m || b==m) cout<<m-c+1;
            else cout<< m-c;
        }
        else
        {
            cout<< m-c+1;
        }
        cout<< endl;

    }
}

