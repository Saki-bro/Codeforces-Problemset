#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>> s;    int c=0,f=0;

        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='B')
            {
                f++;
            }
            else
            {
                c += f;
                if(f)
                {
                    s[i]='B';
                    f=0;
                    i++;
                }
            }

        }

        cout<< c<< endl;




    }
}

