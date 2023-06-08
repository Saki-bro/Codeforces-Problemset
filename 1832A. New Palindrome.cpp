#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, length;
    cin>> n;

    while (n--)
    {
        string s;
        cin>> s;
        length = s.size();

    s = s.substr(0, s.size() / 2);
    int k = unique(s.begin(), s.end()) - s.begin();
    if(k==1)
    {
        cout<< "NO"<< endl;
    }
    else
    {
        cout<< "YES" << endl;
    }
    //cout<< s<< endl;
    //bool palindrome = false;
    //int ss = s.size();

    //if(palindrome)
   // {
       // cout<< "1" << endl;
    //}
   // else
   // {
   //     cout<< ss << endl;
   // }

    //cout << k<< endl;
    ////cout << (k == 1 ? "NO" : "YES") << '\n';

    }
}
