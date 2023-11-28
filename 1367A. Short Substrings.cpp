#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        string b;
        cin>> b;
        vector<string>in;
        for(int i=0;i<b.length();i++)
        {
            if(i%2!=0)
            {
                in.push_back(string(1,b[i]));

            }
        }
        cout<< b[0];
        for(const string& s: in)
        {
            cout<< s;
        }
        cout<< endl;
    }
}
