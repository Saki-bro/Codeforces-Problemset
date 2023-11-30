#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int x = max(a*2,b);
        int y = max(a,b*2);
        int z = min(x,y);
        cout<< z*z << endl;
    }
}


