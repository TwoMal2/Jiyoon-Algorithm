#include<iostream>
#include<queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int repeat, N, M, priority;
    int answer, target;
    cin>>repeat;

    for(int i=0;i<repeat;i++){
        priority_queue<int> pq;
        queue<pair<int,int> > q;
        answer=0;

        cin>>N>>M;

        for(int j=0;j<N;j++){
            cin>>priority;
            pq.push(priority);
            q.push(make_pair(j,priority));
        }
        while (!q.empty()){
            target = q.front().first;

            if(pq.top()>q.front().second){
                q.push(q.front());;
                q.pop();
            }else{
                q.pop();
                pq.pop();
                answer++;

                if(M==target){
                    cout<<answer<<"\n";
                    break;
                }
            }
        }
        
    }


    return 0;
}