#include <iostream>
#include<string>
using namespace std;
int main()
{
    int year;
    cin>> year;

    while(true)
    {
        year++;
        string Syear = to_string(year);

        bool distinctYear = true;

        for(int i=0; i<Syear.length() && distinctYear; i++)
        {
            for(int j=i+1; j<Syear.length(); j++)
            {
                if(Syear[i] == Syear[j])
                {
                    distinctYear = false;
                    break;
                }
            }
        }

        if(distinctYear)
        {
            cout<< year << endl;
            break;
        }
    }
}
