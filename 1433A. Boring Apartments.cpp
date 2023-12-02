#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int n;
        cin>>n;
        int sizee = 1;
        while(n >= 10)
        {
            n /= 10;
            sizee++;
        }
        int num=(n-1)*10;
        //cout<< "size: "<< sizee<< endl;
        //cout<< "n : "<< n<< endl;

        if (sizee == 4) {
            num += 10;
        } else if (sizee == 3) {
            num += 6;
        } else if (sizee == 2) {
            num += 3;
        } else if (sizee == 1) {
            num += 1;
        }


        cout << num << endl;
    }

}

