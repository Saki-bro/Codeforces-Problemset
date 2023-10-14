#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {

        long long n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        long long c = 0;
        for(int i=0; i<10; i++)
        {
        if(x.find(s) != -1)
        {
            cout<<i<<endl;
            c++;
            break;
        }
         x+=x;
        }
        if (c == 0)
            {
                cout << "-1" << endl;
            }

    }


}
