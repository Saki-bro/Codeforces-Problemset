#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
    cin >> t;

    while(t--)
    {

       int  n;
       cin>> n;
       int arr[n];

       for(int i=0; i<n; i++)
       {
           cin>> arr[i];
       }
       vector<int>array;
       int count = 0;
       for(int i=0; i<n; i++)
       {
           if(arr[i] == 0)
           {
               count++;
           }
           else
           {
               if(count>0)
               {
                   array.push_back(count);
               }

               count = 0;
           }
       }
       //sort(array.rbegin(),array.rend());

       if(count >= 0)
       {
           array.push_back(count);
       }
        sort(array.rbegin(),array.rend());
       cout<< array[0];
       cout<< endl;
    }


    return 0;
}
