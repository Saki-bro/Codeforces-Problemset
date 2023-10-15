#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> zero;
    vector<int> one;

    int count = 1;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i-1])
        {
            count++;
        } else
            {
                if (s[i-1] == '0')
                 {
                    zero.push_back(count);
                 }
                 else
                 {
                    one.push_back(count);
                 }
                count = 1;
            }
    }

    if (s[s.size() - 1] == '0')
    {
        zero.push_back(count);
    }
    else
    {
        one.push_back(count);
    }
    sort(zero.begin(), zero.end());
    sort(one.begin(), one.end());
    if(zero[zero.size()-1]>6 || one[one.size()-1]>6)
    {
        cout<< "YES"<< endl;
    }
    else
    {
        cout<< "NO" << endl;
    }


}
