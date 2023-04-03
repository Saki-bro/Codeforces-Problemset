#include <iostream>
using namespace std;
int main()

{
    int n, p1,q1, count = 0;
    cin>> n;

    for(int i=0; i<n; i++)
    {
        cin>> p1 >> q1;
        if((q1 - p1) >= 2 )
        {
            count++;
        }
    }

    cout<< count;


}
