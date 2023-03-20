#include <iostream>
using namespace std;
int main()

{
    int n, num, number;
    cin>> n;

    num = n/5;
    number = n%5;
    if (number == 0)
    {
        cout<< num;
    }
   else
   {
       cout<< num + 1;
   }

    return 0;

}
