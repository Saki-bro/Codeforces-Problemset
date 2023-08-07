#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int n,a, len;
        cin>>n;
        int arr[1000];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

        }
       // len = sizeof(arr) / sizeof(arr[0]);
        //cout<< "LEN: " << len << endl;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum += arr[i];

        }
       // cout<< "SUM:" << sum<< endl;;

        if(sum % 2 == 0)
            {
                cout<< "yes" << endl;
            }
            else

            {
                cout<< "NO" << endl;
            }


    }
}
