#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;
    cin>> n>>l;
    int m = 240-l;
    int sum=0;
    int c=0;
    for(int i=1;i<=n;i++)
    {
        sum +=5*i;
        if (sum <= m)
        {
            c++;
        }
    }
    cout<< c << endl;
}
