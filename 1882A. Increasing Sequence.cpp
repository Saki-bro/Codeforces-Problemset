#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int n;
        cin>> n;
        int b=1;
        int a[n];
        vector<int>num;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];

            if(a[i] != b)
            {
                num.push_back(b);
            }
            else
            {
                b++;
                num.push_back(b);
            }

            b++;
        }

            cout<< num.back()<< endl;


    }
}

