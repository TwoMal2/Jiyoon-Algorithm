#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;

    cin>>a>>b;
    cout<<a*(b%10)<<endl;
    cout<<a*(b%100/10)<<endl;
    cout<<a*(b/100)<<endl;
    cout<<a*b<<endl;



    return 0;
}