#include <iostream>
#include <string>
#include <set>
using namespace std;


int main()
{

int t;

    cin >> t;
    while(t--)
    {
        set < pair < char , char > > s;
        int n ;
        string str;
        cin >> n;
        cin >> str;
        for(int i = 0 ; i < str.size() - 1; i++)
        {
            char a , b;
            a = str[i];
            b = str[i + 1];
            s.insert({a , b});
        }
        cout << s.size() << endl;
    }
    return 0;
}
