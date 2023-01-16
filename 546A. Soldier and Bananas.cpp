#include<iostream>
using namespace std;


int main ()
{
    int k,n,w;
    int price = 0;

    cin>> k >> n >> w;

    for(int i=1; i<=w; i++)
    {
        price += k*i;



    }

     if (price > n)
    {
        cout<< price - n;
    }


   else if (price <= n)
    {
        cout<< 0;
    }


}
