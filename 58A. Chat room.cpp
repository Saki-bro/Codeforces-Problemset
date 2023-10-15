#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>> s;

    int len = s.length();
    string hello = "hello";
    int helloIndex = 0;

    for(int i=0; i<len; i++)
    {
        if(s[i] == hello[helloIndex])
        {
            helloIndex++ ;

        }

    }

        if(helloIndex == hello.length())
        {
            cout<< "YES";
        }
        else
        {
            cout<< "NO";
        }



    return 0;
}
