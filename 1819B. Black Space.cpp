#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int current_count = 0;
        int max_count =0;
        int n;
        cin>> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>> arr[n];
        }
        for(int i=0; i<n; i++)
            {
                if(arr[i] == 0)
                {
                    current_count++;
                }
                else
                {
                    if(current_count > max_count)
                    {
                        max_count = current_count;
                    }
                    current_count = 0;
                }
            }
            if(current_count > max_count)
            {
                max_count = current_count;
            }

            cout<< max_count << endl;


    }
}
