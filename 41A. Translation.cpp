#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s,t;
    cin>> s >> t;

    int len = s.length();
    string reversed ;

    for(int i=len-1; i>=0; i--)
    {
        reversed += s[i];
    }



    if(t == reversed)
    {
        cout<< "YES";
    }
    else
    {
        cout<< "NO";
    }

    return 0;

}
