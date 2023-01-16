#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()

{
    int n  ;
    cin>> n;
    while (n--)
    {
        char name[1000];

        cin>> name;
        int len = strlen(name);
        if(len > 10){
                cout<< name[0]<< len - 2 << name[len - 1]<< endl;

        }
        else {
            cout<< name<< endl;
        }
    }
}
