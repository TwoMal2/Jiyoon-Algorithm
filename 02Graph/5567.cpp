#include<iostream>
using namespace std;

int schoolFriends[100001][2];
int friendList[501]={0};

int friendCounting(int N, int M);

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //알고리즘 : 처음에 입력받음, list를 탐색하며 1과 이어지는 번호들을 answer 1씩 증가
    //이때 친구의 친구만 친구가 됨, 친구의 친구의 친구는 친구가 아님 ex) 1-2-3-4일 경우 3까지만,,,

    int N, M, answer;
    cin>>N>>M;

    for(int i=0; i<M; i++)
        cin>>schoolFriends[i][0]>>schoolFriends[i][1];
    
    answer=friendCounting(N,M);

    cout<<answer;

    return 0;
}

int friendCounting(int N, int M){
    int answer=0;
 //1과 친구인 사람들부터
    friendList[0]=1;
    for(int i=0;i<M;i++){
        if(schoolFriends[i][0]==1){
                friendList[schoolFriends[i][1]-1]=1;
        }
    }

    //친구인 친구를 조사
    for(int i=0;i<M;i++){
        if(friendList[schoolFriends[i][0]-1]==1&&!friendList[schoolFriends[i][1]-1]){
            friendList[schoolFriends[i][1]-1]=2;
        }
        else if(!friendList[schoolFriends[i][0]-1]&&friendList[schoolFriends[i][1]-1]==1){
            friendList[schoolFriends[i][0]-1]=2;
        }
                
    }
    
    for(int i=1;i<N;i++)
        if(friendList[i])
            answer++;

    return answer;
}
