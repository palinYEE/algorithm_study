#include<stdio.h>
#include<algorithm>

int number, array[1000000];

int main(){
    scanf("%d", &number);
    for(int i=0; i<number; i++){
        scanf("%d", &array[i]);
    }

    std::sort(array, array+number);

    for(int i=0; i<number; i++){
        printf("%d\n", array[i]);
    }
}