#include <bits/stdc++.h>
using namespace std;

int main()
    {


        int a,b,c,d;
        cin>> a>> b>> c>> d;
        int x,y,z;
        if(a>=b && a>=c && a>=d)
        {
            x = a-b;
            y = a-c;
            z = a-d;
        }

        else  if(b>=a && b>=c && b>=d)
        {
            x = b-a;
            y = b-c;
            z = b-d;
        }
         else  if(c>=a && c>=b && c>=d)
        {
            x = c-a;
            y = c-b;
            z = c-d;
        }
         else  if(d>=a && d>=c && d>=b)
        {
            x = d-a;
            y = d-b;
            z = d-c;
        }
        cout<<x<<" "<<y<<" "<<z<<" "<<endl;

    }

