#include<iostream>
using namespace std;
int main()
{
    int n,num, hundred,twnty,ten,five,one;
    cin>> n;


    hundred = n/100;
    num     = n%100;
    twnty   =num/20;
    num     =num%20;
    ten     =num/10;
    num     =num%10;
    five    =num/5;
    num     =num%5;
    one     =num/1;
    num     =num%1;

    cout<< hundred+twnty+ten+five+one<< endl;



}
