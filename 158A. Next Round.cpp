#include<iostream>
using namespace std;

int main()

{
    int n,k,m=0;
    cin>> n>> k;

    int people[100];

    for(int i = 1; i<=n ; i++)
    {

            cin>> people[i];
    }

    for (int i = 1; i<=n; i++ )
    {
        if(people[i] >= people[k] && people[i] > 0) {
            m++;
        }
    }

    cout<< m;

return 0;
}
