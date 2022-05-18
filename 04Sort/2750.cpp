#include<iostream>
using namespace std;

int arr[1001];
int emptyArr[1001];

void merge(int, int, int);
void mergeSort(int, int);

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin>>N;

    for(int i=0;i<N;i++)
        cin>>arr[i];

    mergeSort(0, N-1);
    
    for(int i=0;i<N;i++)
        cout<<arr[i]<<"\n";

    return 0;
}

void merge(int left, int mid, int right){
    int i = left, j = mid+1, a = left;

    while (i<=mid && j<=right){
        if(arr[i]<arr[j])
            emptyArr[a++] = arr[i++];
        else
            emptyArr[a++] = arr[j++];
    }
    
    if(i>mid)
        for(int k=j; k<=right; k++)
            emptyArr[a++] = arr[k];
    else
        for(int k=i; k<=mid; k++)
            emptyArr[a++] = arr[k];
    
    for(int k = left; k<=right; k++)
        arr[k] = emptyArr[k];

}

void mergeSort(int left, int right){
    int mid;

    if(left<right){
        mid = (left+right)/2;
        mergeSort(left, mid);
        mergeSort(mid+1, right);
        merge(left, mid, right);
    }
}