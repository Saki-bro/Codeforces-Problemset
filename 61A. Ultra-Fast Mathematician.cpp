#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n,s;
    cin>> n >> s;

    int len1 = n.length();
    int len2 = s.length();
    string output ;

    if(len1 == len2)
    {
        for(int i=0; i<len1; i++)
        {
            if(n[i] == s[i])
            {
                output += "0";
            }
            else
            {
                output += "1";
            }
        }
    }

    cout<< output;
}
