#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>> n;

    while (n--)
    {
        int count=0;
        string ch = "codeforces";
        string s;
        cin>> s;

        for(int i=0; i<10; i++)
        {
            if(s[i] != ch[i])
            {
                count++;
            }

        }
        cout<< count << endl;
    }
}
