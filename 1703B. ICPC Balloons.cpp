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
        string s;
        cin>> s;
        set<char>k;

        for(int i=0; i<s.length(); i++)
        {
            k.insert(s[i]);
        }

        cout<<k.size()*2 + (n-k.size()) << endl;


    }
}



