#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{

    int m,n;
    cin>> m >> n;
    string arr[m][n];
    bool f=false;int w=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=="C" || arr[i][j]=="M" || arr[i][j]=="Y")
            {
                f=true;
                //w++;
            }
        }
    }
   // int total=m*n;
    //int ans = total-w;
   if(!f)
    {
        cout<< "#Black&White"<< endl;
    }
    else
    {
        cout<< "#Color"<< endl;
    }

}
  main()
{
        solve();
        return 0;
}




