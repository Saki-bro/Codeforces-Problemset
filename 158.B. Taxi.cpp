#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;

void solve()
{
    int n, a = 0, b = 0, c = 0, d = 0;
    cin >> n;
    int arr[n], ans;
    double find_num;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 1)
            a++;
        else if(arr[i] == 2)
            b++;
        else if(arr[i] == 3)
            c++;
        else
            d++;
    }

    if(c >= a)
    {
        find_num = (double)(2.0 * b) /4;
        find_num = ceil(find_num);
        ans = find_num + c + d;
    }
    else
    {
        find_num = (double)((a - c) + (2.0 * b)) /4;
        find_num = ceil(find_num);
        ans = find_num + d + c;
    }

    cout << ans << endl;
}

main()
{
//    int t;
//    cin >> t;
//    while(t--)
//    {
    solve();
//    }

    return 0;
}
