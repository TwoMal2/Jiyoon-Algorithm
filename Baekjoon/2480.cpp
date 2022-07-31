#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c;

    cin>>a>>b>>c;

    if(a==b && b==c)
        cout<<a*1000+10000;
    else if(a==b)
        cout<<a*100+1000;
    else if(b==c || c==a)
        cout<<c*100+1000;
    else
        cout<<max(max(a,b),c)*100;


    return 0;
}