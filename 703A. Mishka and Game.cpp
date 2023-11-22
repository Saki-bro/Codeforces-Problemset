#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    int m=0;
    int c=0;

    while(t--)
    {
        int x,y;
        cin>> x >> y;

        if(x==y)
        {

        }

        else if(x>y)
        {
            m++;
        }
        else
        {
            c++;
        }

    }
        if(m==c)
        {
            cout<< "Friendship is magic!^^" << endl;
        }
        else if(m>c)
        {
            cout<< "Mishka"<< endl;
        }
        else
        {
            cout<< "Chris"<< endl;
        }
}

