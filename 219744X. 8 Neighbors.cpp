#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl

/*---------------Bismillah---------------------*/

void solve()
{
    int x,n,c=0;
    cin>> x >> n;
    vector<vector<char>> arr(x, vector<char>(n));

    for(int i=0; i<x; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>> arr[i][j];
            if(arr[i][j] == '.')
            {
                c=3;
            }
            if(arr[i][j] == 'x')
            {
                c=4;
            }
        }
    }
    int i,j;
    cin>>i>>j;
    i--;
    j--;

    if(c!=3)
    {
        cout<< "yes"<< endl;
    }
    else if(c!=4)
    {
        cout<< "yes"<< endl;
    }
    else if (i > 0 && i < x - 1 && j > 0 && j < n - 1)
    {
        if ((arr[i][j - 1] == 'x') && (arr[i][j + 1] == 'x') &&
                (arr[i - 1][j] == 'x') && (arr[i + 1][j] == 'x')
                && (arr[i-1][j-1] == 'x') && (arr[i+1][j+1] == 'x')
                && (arr[i-1][j+1]) == 'x' && (arr[i+1][j-1]))
        {
            c = 1;
        }
        if(c==1)
            cout<< "yes"<< endl;
        else
            cout<< "no"<< endl;
    }




}

int main()
{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
    solve();
//    }
    return 0;
}

