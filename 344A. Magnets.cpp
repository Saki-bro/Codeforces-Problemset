#include<iostream>
using namespace std;
int main()
{
    int n;
    int prev = -1;
    int count = 0;
    cin>> n;
    int a[100000];
    for(int i=0; i<n; i++)
    {
        cin>> a[i];
        if(a[i] != prev)
        {
            count++;
            prev = a[i];
        }

    }

    cout<< count;



}
