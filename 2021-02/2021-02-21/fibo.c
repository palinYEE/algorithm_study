#include<stdio.h>
#include<time.h>

int k[100] = {0,};

int d(int x){
    if(x == 1) return 1;
    if(x == 2) return 1;

    return d(x-1) + d(x-2);
}

int fibonacci(int x){
    if(x == 1) return 1;
    if(x == 2) return 1;
    if(k[x] != 0) return k[x];

    return k[x] = fibonacci(x-1) + fibonacci(x-2);
}
int main(){
    clock_t start = clock();
    printf("### original fibonacci result ###\n");
    printf("fibonacci original result : %d\n", d(35));
    printf("소요 시간 : %ld\n", clock() - start);

    start = clock();
    printf("### dynamic programming fibonacci result ###\n");
    printf("dynamic programming fibonacci result : %d\n", fibonacci(35));
    printf("소요 시간 : %ld", clock() - start);


    printf("\n\\    /\\ \n )  ( ')\n(  /  )\n \\(__)|");

}