#include<iostream>
#include<stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //스택에 거꾸로 넣어서 해당 인덱스를 max에 저장 후 그전까지 빼기, 만약 max가 index보다 크지 않으면 -1
    int N, origin, count=0;
    stack<int> s;
    cin>>N;

    const int size = N;
    int stack[size], answer[size];

    for(int i=N-1;i>=0;i--)
        cin>>stack[i];
    
    for(int i=0;i<N;i++){
        origin = stack[i];
    
        while (!s.empty() && s.top()<=origin)
            s.pop();

        answer[N-1-i]=(!s.empty()?s.top():-1);
        s.push(stack[i]);
    }
    for(int i=0;i<N;i++)
        cout<<answer[i]<<" ";

    return 0;
}