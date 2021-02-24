#include<stdio.h>
#include<stdlib.h>

void quickSort(int* data, int start, int end){
    if(start > end){
        return;
    }

    int key = start;
    int i = start+1, j = end, temp;

    while(i <= j){
        while(i<=end && data[i] <= data[key]){
            i++;
        }
        while(j > start && data[j] > data[key]){
            j--;
        }
        if(i>j){
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        }else{
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }
    quickSort(data, start, j-1);
    quickSort(data, j+1, end);
}

int main(){
    int N;
    int data[1001];
        
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &data[i]);
    }
    quickSort(data, 0, N-1);
    
    for(int i=0; i<N; i++){
        printf("%d\n", data[i]);
    }
}