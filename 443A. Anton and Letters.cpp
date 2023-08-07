#include<iostream>
using namespace std;
int main()

{
    string arr;
    bool isDistict;

    int count=0;
    getline(cin,arr);

   // for(int i=0; i<arr.size(); i++)
  //  {
  //      cin>> arr[i];
   // }
//
    for(int i=0; i<arr.size(); i++)
    {
        isDistict = true;
        if(arr[i] == '{}' || arr[i] == ',' || arr[i] == ' ')
            {
                continue;
            }

        else
        {
            if(arr[i] != arr[i+1])
            {
                count++;
            }
        }
    }


    cout<< count<< endl;

}
