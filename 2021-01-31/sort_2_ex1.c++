#include<iostream>
#include<vector>
#include<algorithm>
#include<windows.h>

using namespace std;
#pragma execution_character_set("utf-8")

int main(){
    SetConsoleOutputCP(65001);
    vector<pair<int, string> > v;
    v.push_back(pair<int, string>(90, "박한올"));
    v.push_back(pair<int, string>(85, "이태일"));
    v.push_back(pair<int, string>(82, "나동빈"));
    v.push_back(pair<int, string>(98, "윤영진"));
    v.push_back(pair<int, string>(79, "이상욱"));

    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i].second << ' ';
    }
    return 0;
}