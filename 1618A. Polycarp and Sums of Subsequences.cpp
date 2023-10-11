#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)

{
    long long a1,a2,a3,a4,a5,a6,a7;
    cin>> a1>>a2>>a3>>a4>>a5>>a6>>a7;

    if(a1+a2+a3 == a7)
    {
        cout<< a1 << " " << a2 << " " << a3 << endl;
    }
    else if(a1+a2+a4 == a7)
    {
        cout<< a1 << " " << a2 << " " << a4 << endl;
    }
     else if(a1+a2+a5 == a7)
    {
        cout<< a1 << " " << a2 << " " << a5 << endl;
    }
     else if(a1+a2+a6 == a7)
    {
        cout<< a1 << " " << a2 << " " << a6 << endl;
    }



}

 return 0;
}

