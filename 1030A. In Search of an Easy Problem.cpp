#include <iostream>

using namespace std;
int main()

{
    int n, easy=0;
    cin>> n;
    int a[1000];
    for(int i=0; i<n; i++)
    {
        cin>> a[i];
        if(a[i] > 0)
        {
            easy++;
        }
    }

    if(easy > 0)
    {
        cout<< "HARD";
    }
    else
        {
             cout<< "EASY";
        }



}
