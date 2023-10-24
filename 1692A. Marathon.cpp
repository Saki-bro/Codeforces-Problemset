#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a;
        cin>> a;
        int c = 0;
        int arr[3];
        for(int i=0; i<3; i++)
        {
            cin>> arr[i];
            if(arr[i]> a)
            {
                c++;
            }
        }
        cout<< c << endl;
    }

}
