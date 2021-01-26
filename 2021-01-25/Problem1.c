#include<stdio.h>

int main(){
    int i, j, min, index, temp;

    int array[3];

    scanf("%d %d %d", &array[0], &array[1], &array[2]);
    for(i=0;i<3;i++){
        min = 1000000;
        for(j=i; j<3; j++){
            if(min > array[j]){
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }

    for(i=0; i<3; i++){
        printf("%d ",array[i]);
    }
    return 0;
}