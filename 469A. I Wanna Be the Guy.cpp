#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin>>n1;
    bool levels[100+1] = {0};

    cin>> n2;
    for(int i=0; i<n2; i++)
    {
        int p;
        cin>> p;
        levels[p] = true;
    }
    cin>> n3;
    for(int i=0; i<n3; i++)
    {
        int q;
        cin>> q;
        levels[q] = true;
    }


    for(int i=1; i<=n1; i++)
    {
        if(!levels[i])
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout<< "I become the guy.";
    return 0;

}
