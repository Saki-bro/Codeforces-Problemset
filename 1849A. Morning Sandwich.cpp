#include<iostream>
using namespace std;

int main()
{


int n;
cin>> n;
while(n--)
{
    int b,c,h;
    cin>> b>> c>> h;
    int ans = c+h;
    if(b-1 >= ans)
    {
        cout<< ans+ans+1 << endl;
    }
    else
    {
        cout<< b+b-1 << endl;
    }
}

}
