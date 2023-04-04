#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum=0, mean;
    cin>> n;
    int arr[1000];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
       sum += arr[i];
    }

   mean = sum/n;
   cout<< mean;

}
