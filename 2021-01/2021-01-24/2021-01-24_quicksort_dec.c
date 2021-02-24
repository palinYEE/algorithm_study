#include<stdio.h>

int number = 10;
int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

void show(){
    // printf("Finish quick sort\n");

    for(int i=0; i<number; i++){
        printf("%d ", data[i]);
    }
    printf("\n");
}

void quickSort_dec(int* data, int start, int end){
    if(start > end){
        return;
    }

    int key = start;
    int i=start+1, j=end, temp;

    while(i <= j){
        while(i <= end && data[i] >= data[key]){
            i++;
        }
        while(j > start && data[j] < data[key]){
            j--;
        }
        if(i>j){
            temp = data[key];
            data[key] = data[j];
            data[j] = temp;
        }else{
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
        
    }
    show();
    quickSort_dec(data, start, j-1);
    quickSort_dec(data, j+1, end);
}

int main(){
    quickSort_dec(data, 0, number-1);
    show();
    return 0;
}