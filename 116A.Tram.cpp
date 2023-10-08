#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    int pass_in=0, pass_total=0;
    while(t--)
    {
        int a,b;
        cin>> a>> b;
        pass_in -= a;
        pass_in += b;

        if(pass_in > pass_total)
        {
            pass_total = pass_in;
        }
    }
    cout<< pass_total<<endl;
}
