#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int number = 7;
int c[7];
vector<int> a[8];

void bfs(int start){
    queue<int> q;
    q.push(start);
    c[start] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        printf("%d ", x);
        for(int i=0; i<a[x].size(); i++){
            int y = a[x][i];
            if(!c[y]){
                q.push(y);
                c[y] = true;
            }
        }
    }
}

int main(){
    // 1과 2를 이어주는 부분
    a[1].push_back(2);
    a[2].push_back(1);

    // 1과 3을 이어주는 부분
    a[1].push_back(3);
    a[3].push_back(1);

    // 2와 3을 이어주는 부분
    a[2].push_back(3);
    a[3].push_back(2);

    // 2와 4을 이어주는 부분
    a[2].push_back(4);
    a[4].push_back(2);

    // 2와 5을 이어주는 부분
    a[2].push_back(5);
    a[5].push_back(2);

    // 3와 6을 이어주는 부분
    a[3].push_back(6);
    a[6].push_back(3);

    // 3와 7을 이어주는 부분
    a[3].push_back(7);
    a[7].push_back(3);
    
    // 4와 5을 이어주는 부분
    a[4].push_back(5);
    a[5].push_back(4);

    // 6와 7을 이어주는 부분
    a[6].push_back(7);
    a[7].push_back(6);

    bfs(1);

    return 0;

}