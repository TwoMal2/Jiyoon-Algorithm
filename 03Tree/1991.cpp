#include<iostream>
using namespace std;

int treeArray[26][2];

void preOrder(int n);
void inOrder(int n);
void postOrder(int n);

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin>>N;
    //초기 생각: 트리노드를 만들고 입력받을 때마다 자식 노드 입력 -> 순회
    //문제점: 트리노드 객체를 어떻게 만들지??
    //-> 배열로 생성하고 해당 인덱스에 자식 인덱스를 넣자! 이때 인덱스 = 실제 인덱스 - 1 로 계산한다.

    //배열에 입력받음
    for(int i=0;i<N;i++){
        int a;
        char data;

        cin>>data;
        a = data - 'A';
        for(int j=0;j<2;j++){
            cin>>data;
            if(data!='.')
                treeArray[a][j] = data - 'A';
            else
                treeArray[a][j] = -1;
        }
    }

    preOrder(0);
    cout<<endl;

    inOrder(0);
    cout<<endl;

    postOrder(0);
    cout<<endl;

    return 0;
}

void preOrder(int n){
    if(n==-1)
        return;
    cout<<(char) (n + 'A');
    preOrder(treeArray[n][0]);
    preOrder(treeArray[n][1]);
}

void inOrder(int n){
    if(n==-1)
        return;
    inOrder(treeArray[n][0]);
    cout<<(char) (n + 'A');
    inOrder(treeArray[n][1]);
}

void postOrder(int n){
    if(n==-1)
        return;
    postOrder(treeArray[n][0]);
    postOrder(treeArray[n][1]);
    cout<<(char) (n + 'A');
}