#include <iostream>
using namespace std;
#define ll long long
int main()
{
    int x;
    cin>> x;
    while(x--)
    {
        ll t;
        cin>> t;

        ll sum=0;

        while(t)
        {
            sum+= t;
            t = t/2;


        }

        cout<< sum << endl;;
    }
}
