#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int  main()

{

    int n,j;
    string s;
    cin>> s;

    for (int i=0; i<s.size(); i+=2)
    {

       for(int j = 0; j<s.size()-1; j+=2) {

            if(s[j] > s[j+2]) {
                swap(s[j],s[j+2]);
            }
       }
    }
    cout<< s << endl;

}
