#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3;
    cin>> s1 >> s2>> s3;

    string marge = s1+s2;

    sort(marge.begin(), marge.end());

    sort(s3.begin(), s3.end());

    if(marge == s3)
    {
        cout<< "YES";
    }
    else
    {
        cout<< "NO";
    }
}

