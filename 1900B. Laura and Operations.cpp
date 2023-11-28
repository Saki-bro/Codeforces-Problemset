#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int a,b,c;
        cin>> a >> b >> c;
        int for_a = b-c;
        int for_b = a-c;
        int for_c = a-b;
        if(for_a%2 == 0)
        {
            cout<< 1 << " ";
        }
        else
        {
            cout<< 0 << " ";
        }

         if(for_b%2 == 0)
        {
            cout<< 1 << " ";
        }
        else
        {
            cout<< 0 << " ";
        }
        if(for_c%2 == 0)
        {
            cout<< 1 << " ";
        }
        else
        {
            cout<< 0 << " ";
        }
        cout<< endl;
    }
}

