#include<stdio.h>

// using namespace std;
// 동일한 코드여도 c++과 c의 속도 차이가 존재한다.
int n;
int a[10001] = {0,};

int main(){
    int num;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        a[num]++;
    }
    for(int i=0; i<10001; i++){
        while (a[i] != 0)
        {
            printf("%d\n", i);
            a[i]--;
        }
        
    }
    return 0;
}