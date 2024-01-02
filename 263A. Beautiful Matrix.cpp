#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int arr[6][6];int m,n;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>> arr[i][j];
            if(arr[i][j] > 0)
            {
                m=i;
                n=j;
            }
        }
    }
    cout<< abs(m-3)+abs(n-3)<< endl;

}
  main()
{
    solve();
    return 0;
}



