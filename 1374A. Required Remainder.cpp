#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int x,y,n;
        cin>> x>> y>> n;

        int a = (n-y)/x;

        int b = (a*x)+y;

        cout<< b << endl;
    }
}
