#include <bits/stdc++.h>
 #define II long long
using namespace std;
int main()
{
    int t;
   cin >> t;
   while(t--)
   {
       int n;
     cin >> n;
     int ans = 1;

     for(int i=0; i<n; i++)
     {
         cout<< ans << " ";
         ans+=2;
     }

     cout << endl;
   }


}
