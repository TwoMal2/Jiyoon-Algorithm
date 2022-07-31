#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, x, a;
    cin>>N>>x;

    for(int i=0;i<N;i++){
        cin>>a;
        if(a<x)
            cout<<a<<" ";
    }



    return 0;
}