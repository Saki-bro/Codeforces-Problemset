#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s;
        cin>> s;
        bool yes=false;
        string a="codeforces";
        for(int i=0;i<a.size();i++)
        {
            if(s==a[i])
            {
                yes = true;
            }
        }
        if(!yes)
        {
            cout<< "NO"<< endl;
        }
        else
        {
            cout<< "YES"<< endl;
        }
    }

    return 0;
}
