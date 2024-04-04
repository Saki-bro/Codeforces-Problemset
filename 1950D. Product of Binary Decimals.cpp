
#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long
using namespace std;

vector<ll>v(32);
void save()
{
    v[1]=10;
    v[2]=11;

    v[3]=100;
    v[4]=101;
    v[5]=110;
    v[6]=111;

    v[7]=1000;
    v[8]=1001;
    v[9]=1010;
    v[10]=1011;
    v[11]=1100;
    v[12]=1101;
    v[13]=1110;
    v[14]=1111;

    v[15]=10000;
    v[16]=10001;
    v[17]=10010;
    v[18]=10011;
    v[19]=10100;
    v[20]=10101;
    v[21]=10110;
    v[22]=10111;
    v[23]=11000;
    v[24]=11001;
    v[25]=11010;
    v[26]=11011;
    v[27]=11100;
    v[28]=11101;
    v[29]=11110;
    v[30]=11111;

}
void solve()
{
    ll i,j,n,x,k,a,b,c;
    cin>>n;
    for(i=30; i>0; i--)
    {
        //cout<<n<<' '<<v[i]<<' '<<n%v[i]<<endl;
        while(n>=v[i] && n%v[i]==0)
        {
            n/=v[i];
        }
    }
    if(n==1)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}
int main()
{
    save();
    ll t=1,tc=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
