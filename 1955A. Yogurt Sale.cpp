#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve()
{
    int n,a; double even,odd,div,b;
    cin>> n >> a >> b;
    div = b/2;

    if(n%2==0)
    {

        //cout<< div;
        even = n*a;
        odd = n*div;
        if(even>odd)
        {
            cout<< odd << endl;
        }
        else
        {
            cout<< even << endl;
        }
    }
    else
    {
        int new_n = n-1;
        int price = (new_n*div)+ a;
        int price_n = n*a;

        if(price>price_n)
        {
            cout<< price_n<< endl;
        }
        else
        {
            cout<< price << endl;
        }
    }

}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}



