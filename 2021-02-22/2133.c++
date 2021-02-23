#include<iostream>

using namespace std;

int d[40];

int dp(int x){
    if(x == 0) return 1;
    if(x % 2 == 1) return 0;
    if(x == 2) return 3;
    if(d[x] != 0) return d[x];

    int result = 3*dp(x-2);

    for(int i = 3; i <= x; i++){
        if(i %2 ==0) result += 2*dp(x-i);
    }

    return d[x] = result;
}

int main(){
    int a;

    cin >> a;

    printf("%d", dp(a));
}