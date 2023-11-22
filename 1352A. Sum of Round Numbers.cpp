#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        string s;
        cin>> s;
        vector<string>a;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] !='0')
            {
                a.push_back(s.substr(i,1)+string(s.length()-i-1, '0'));
            }
        }
        cout<< a.size()<< endl;
        for(const auto& str : a)
        {
            cout<< str << " ";
        }
            cout<< endl;
    }
}
