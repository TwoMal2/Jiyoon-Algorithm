#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int A, B, C, D=0;

    cin>>A>>B>>C;

    B+=C;
    if(B>=60){
        D=B-60*(B/60);
        A = A+(B/60);
        if(A>=24)
            A-=24;
        cout<<A<<" "<<D;
    }
    else
        cout<<A<<" "<<B;

    return 0;
}