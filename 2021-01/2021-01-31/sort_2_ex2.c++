#include<iostream>
#include<vector>
#include<algorithm>
#include<windows.h>

using namespace std;
#pragma execution_character_set("utf-8")

bool compare(pair<string, pair<int, int> > a, pair<string, pair<int, int> > b){
    if(a.second.first == b.second.first){
        return a.second.second > b.second.second;
    }else{
        return a.second.first > b.second.first;
    }
}

int main(){
    SetConsoleOutputCP(65001);
    vector<pair<string, pair<int, int>> > v;
    v.push_back(pair<string, pair<int, int>>("나동빈", make_pair(90, 19961222)));
    v.push_back(pair<string, pair<int, int>>("이태일", make_pair(97, 19930518)));
    v.push_back(pair<string, pair<int, int>>("윤영진", make_pair(95, 19970228)));
    v.push_back(pair<string, pair<int, int>>("이상욱", make_pair(90, 19921207)));

    sort(v.begin(),v.end(), compare);
    for(int i=0; i<v.size(); i++){
        cout << v[i].first << ' ';
    }
    return 0;
}