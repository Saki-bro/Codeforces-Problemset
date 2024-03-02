#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;

 main() {
    int K;
    cin >> K;


    int F1 = 1, F2 = 1;

    int sum = 0;


    for (int i = 1; i <= K; ++i)
    {
        if(!(i==1 || i==2))
        {
           int nextTerm = F1;
           F1 += F2;
           F2 = nextTerm;
        }

        sum += F1;
    }


    cout << sum << endl;

    return 0;
}
