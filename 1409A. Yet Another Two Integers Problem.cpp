#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long count = 0;

        if (a != b)
        {
            count =(abs(a - b) / 10) ;
            if (abs(a - b) % 10 != 0)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
