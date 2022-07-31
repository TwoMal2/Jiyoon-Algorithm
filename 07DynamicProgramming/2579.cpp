#include<iostream>
#define MAX_SIZE 301
using namespace std;

int N, score = 0;
int arr[MAX_SIZE];
int stair[MAX_SIZE];

void stepping();

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

//한번에 1~2계단 + 연속 3개 밟지x + 마지막 계단 반드시(N-1)

    cin>>N;
    for(int i=0;i<N;i++)
        cin>>stair[i];
    
    stepping();

    cout<<arr[N-1];
    return 0;
}

void stepping(){
    arr[0] = stair[0];
    arr[1] = (stair[0]+stair[1] > stair[1])? (stair[0]+stair[1]): stair[1];
    arr[2] = (stair[0]+stair[2] > stair[1]+stair[2]) ? (stair[0]+stair[2]):(stair[1]+stair[2]);
    
    for(int i=3;i<N;i++){
        arr[i] = (arr[i-2]+stair[i]>arr[i-3]+stair[i-1]+stair[i])
        ?(arr[i-2]+stair[i]):(arr[i-3]+stair[i-1]+stair[i]);
    }


    
}