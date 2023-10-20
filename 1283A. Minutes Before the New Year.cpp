#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int h,m;
        cin>> h>>m;
        int test  = 24-h;
        int test1 = test*60;
        int test2 = test1-m;
        cout<< test2<< endl;
    }
}

