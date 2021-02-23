#include<iostream>

using namespace std;

int d[10008];

int dp(int x){
    if(x == 1) return 1;
    if(x == 2) return 3; 
    if(d[x] != 0) return d[x];

    return d[x] = (dp(x-1) + 2*dp(x-2))%10007;
}

int main(){
    int a;

    cin >> a;

    printf("%d",dp(a)%10007);
}

