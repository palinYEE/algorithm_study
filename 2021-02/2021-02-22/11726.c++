#include<iostream>

using namespace std;

int d[1008];

int dp(int x){
    if(x == 0) return 0;
    if(x == 1) return 1;
    if(x == 2) return 2;
    if(d[x] != 0) return d[x];
    
    return d[x] = (dp(x-1) + dp(x-2))%10007; 
}

int main(){
    int a;

    cin >> a;
    
    // for(int i=1; i<=1000; i++){
    printf("%d\n", dp(a)%10007);
    // }

}