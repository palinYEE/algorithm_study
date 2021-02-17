#include<stdio.h>

// 노드의 부모 노드를 찾는 함수
int getParent(int parent[], int x){
    if(parent[x] == x) return x;
    return parent[x] = getParent(parent, parent[x]);
}

// 각 부모 노드를 합치는 함수 (노드를 이어주는 함수)
void unionParent(int parent[], int a, int b){
    a = getParent(parent, a);
    b = getParent(parent, b);
    if(a < b) parent[b] = a;
    else parent[a] = b;
}

// 각 노드의 부모 노드가 동일한지 확인하는 함수 (노드가 이어져있는지 확인하는 함수)
int findParent(int parent[], int a, int b){
    a = getParent(parent, a);
    b = getParent(parent, b);
    if(a == b) return 1;
    else return 0;
}

int main(){
    int parent[11];
    for(int i=1; i<=10; i++){
        parent[i] = i;
    }
    unionParent(parent, 1, 2);
    unionParent(parent, 2, 3);
    unionParent(parent, 3, 4);
    unionParent(parent, 5, 6);
    unionParent(parent, 6, 7);
    unionParent(parent, 7, 8);
    printf("1과 5는 연결되어 있는가? %d\n", findParent(parent, 1, 5));
    unionParent(parent, 1, 5);
    printf("1과 5는 연결되어 있는가? %d\n", findParent(parent, 1, 5));

}
