#include<bits/stdc++.h>
#define int long long
#define yes cout<< "YES"<< endl
#define no cout<< "NO"<< endl
using namespace std;
void solve()
{
    string time, period;
    cin>> time;

    int hour,mini;

    hour = stoi(time.substr(0,2));
    mini = stoi(time.substr(3,2));

    if(hour < 12)
    {
        period = "AM";
    }
    else
    {
        period = "PM";
    }

    if (hour == 0)
    {
        hour = 12;
    }
    else if (hour > 12)
    {
         hour -= 12;
    }
    if(hour<10)
    {
        cout<< "0";
    }
    cout<< hour << ":";
    if(mini<10)
    {
        cout<< "0";
    }
    cout<< mini<< " " << period << endl;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


