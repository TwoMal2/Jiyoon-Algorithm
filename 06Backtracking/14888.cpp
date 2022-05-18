#include<iostream>
#define MAX_SIZE 11
using namespace std;

int N, M=-1000000001, m=1000000001;
int numArr[MAX_SIZE];
int opArr[4];

void addOp(int, int);

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //유망할 경우: 마지막 인덱스가 숫자 개수와 같지 않을 때
    //최댓값 최솟값이면 갱신, 해당 op가 0 이상이면 계산하고 넘겨줌

    cin>>N;

    for(int i=0;i<N;i++)
        cin>>numArr[i];

    for(int i=0;i<4;i++)
        cin>>opArr[i];
    
    addOp(1,numArr[0]);
    cout<<M<<endl;
    cout<<m;

}

void addOp(int n, int result){
    if(n==N){
        if(result>M)
            M=result;
        if(result<m)
            m=result;
        return;
    }
    
    for(int i=0;i<4;i++){
        if(opArr[i]>0){
            opArr[i]--;
            switch (i){
            case 0:
                addOp(n+1,result + numArr[n]);
                break;
            case 1:
                addOp(n+1,result - numArr[n]);
                break;
            case 2:
                addOp(n+1,result * numArr[n]);
                break;
            case 3:
                addOp(n+1,result / numArr[n]);
            }
            opArr[i]++;
        }
    }
    return;
}
