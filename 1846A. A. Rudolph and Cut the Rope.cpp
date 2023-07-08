#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>> t;
    int ans = 0;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=0;
        while(n--)
        {
            int a,b;
            cin>> a >> b;

            if(a>b)
            {
                ans++;
            }
        }
        cout<< ans<< endl;
    }


}
