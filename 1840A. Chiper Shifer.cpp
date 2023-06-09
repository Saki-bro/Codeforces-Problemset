#include<iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int n;
        cin>> n;
        string s1,s2;
        cin>>s1;
        for(int i=0; i<n; i++)
        {
            s2 += s1[i];
            for(int j=i+1; j<n; j++)
            {
                if(s1[i] == s1[j])
                {
                    i=j;
                    break;
                }
            }
        }
        cout<< s2 << endl;
    }
}
