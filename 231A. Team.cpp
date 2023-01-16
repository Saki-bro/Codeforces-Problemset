#include<iostream>
using namespace std;

int main()
{
    int n,i,x,y,z;

    cin>>n;
    int count=0;
    for(i=0; i<n; i++){
        cin>> x>>y>>z;
        if(x+y+z >= 2){
            count ++;
        }
    }
    cout<< count;
}
