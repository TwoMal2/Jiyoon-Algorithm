#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int H, M;
    cin>>H>>M;

    M-=45;
    if(M<0){
        M = M + 60;
        H--;
        if(H<0)
            H=23;
    }

    cout<<H<<" "<<M<<endl;

    return 0;
}