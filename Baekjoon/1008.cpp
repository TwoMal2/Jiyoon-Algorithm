#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double a, b;

    cin>>a>>b;
    cout.precision(9);
    cout<<fixed;
    cout<<a/b<<endl;


    return 0;
}