#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int n; //int m=2;
    cin>>n;
    int arr[n];
    int arr2[n];int c=0;
    //vector<int>f,L;
    for(int i=0;i<n;i++)
    {
        cin>> arr[i]>> arr2[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i != j && arr[i] == arr2[j])
            {
                c++;
            }
        }

    }

    cout<< c<< endl;


}
  main()
{
    solve();
    return 0;
}

