#include<bits/stdc++.h>
using namespace std;

bool prime(int a)
{
    if(a==1)
        return 0;
    for(int i=2; i*i<=a; i++)
    {
         if(a%i==0)
            return 0;
    }
    return 1;
}

int main ()
{
     long long a,b=0,i,j,t,c,d;
        string x,z,y;
         cin>>t;
         for(i=0 ; i<t ; i++)
         {
           cin>>a;
           c=sqrt(a);

         if(c*c==a)
         { if(prime(c))
           cout<<"YES" <<endl;
           else
             cout<<"NO" <<endl;
         }
         else
          cout<<"NO" <<endl;

}
}
