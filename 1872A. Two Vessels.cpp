#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;

    while (t--)
    {
        int a,b,c,d;
        cin>> a>> b >> c;

        if(a == b)
        {
            cout<< "0" << endl;
        }
        else if (c > a && c > b)
        {
            cout<< "1" << endl;
        }
        else if(a > b )
        {
            d = ceil((double)(a-b)/(2*c));
            cout<< d << endl;
        }
        else if(b > a )
        {
            d = ceil((double)(b-a)/(2*c));
            cout<< d << endl;
        }
    }
}
