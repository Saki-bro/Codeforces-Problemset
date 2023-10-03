#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int a,b;
        cin>> a>> b;

        int modu = a%b;

        if(modu == 0)
        {
            cout << "0"<< endl;
        }
        else
        {
            int ans = b - modu;
            cout<< ans << endl;
        }

    }
}
