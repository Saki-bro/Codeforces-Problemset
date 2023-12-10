#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int n1 = 0;
    for(int e: a)
    {
        if(e == 1)
        {
           n1++;
        }

    }

    int sm = accumulate(a.begin(), a.end(), 0);
    bool good = (sm % 4 == 0) || (sm % 2 == 0 && n1 > 0);
    if(good)
    {
        cout<< "YES"<< endl;
    }
    else
    {
        cout<< "NO"<< endl;
    }
}

int main() {
    int T;
    cin>>T;
    while(T--)
        {
            solve();
        }
}
