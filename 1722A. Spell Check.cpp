#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        int t;
        cin>>t;
        string s;
        for(int i=0; i<t; i++)
        {
           cin>>s[i];
        }

        for(int i=0; i<1; i++)
        {
           if(s[i]== 'T')
           {
                if(s[i] <'a' || s[i] > 's')
                {
                    if(s[i] < 'u' || s[i] > 'z')
                    {
                        cout<< "YES";
                    }
                }
           }
           else
           {
               cout<< "NO";
           }
        }



    }
}
