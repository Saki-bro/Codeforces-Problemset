#include<iostream>
using namespace std;

int main()
{
    int n,h;
    int count1 = 0, count2 = 0;

    int total;
    cin>> n >> h;


    int a[1000];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

         if(a[i] > h)
        {
            count1 +=2;
        }

        else
        {
            count2 ++;
        }
    }

        cout<< count1 + count2;

}
