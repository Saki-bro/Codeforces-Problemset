#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int n;int j=0;
        bool f=false;
        cin>>n;
        string s;
        cin>>s;
        set<char>c;
        for(int i=1;i<n;i++)
        {
            if(s[i-1]!=s[i])
            {
                c.insert(s[i-1]);
                {
                    if(c.count(s[i]))
                    {
                        f=true;
                    }
                }
            }
        }
        if(!f)
        {
            cout<<"YES"<< endl;
        }
        else
        {
            cout<< "NO"<< endl;
        }
    }
}

