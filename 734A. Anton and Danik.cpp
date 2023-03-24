#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    string s;

    cin>> n;

    for(int i=0; i<n; i++)
    {
        cin>> s;
    }

    char anton = 'A';
    char danik = 'D';
    int countA = 0;
    int countD = 0;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == anton)
        {
            countA++;
        }
        else if(s[i] == danik)
        {
            countD++;
        }
    }

    if(countA > countD)
    {
        cout<< "Anton";
    }
    else if( countA < countD)
    {
        cout << "Danik";
    }
    else
    {
        cout<< "Friendship" ;
    }

}
