#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    int i,j;
    for(i=1;i<=n;i++)
    {
        int k=1;
        for( j=0;j+i<n;j++)
        {
            if(s[j] != s[j+i])
            {
                k=0;
                break;
            }
        }
        if(k)
        {
            break;
        }

    }
    string s1 = s.substr(0,i);
    string s2 = s.substr(i);
    for(i=1; i<=k; i++)
    {
        cout<< s1;
    }
    cout<< s2;
}
