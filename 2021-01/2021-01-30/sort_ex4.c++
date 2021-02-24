#include<iostream>
#include<algorithm>
#include<windows.h> // cout 한글 출력을 위한 해더

using namespace std;

#pragma execution_character_set("utf-8")

class Student{
public:
    string name;
    int score;
    Student(string name, int score){
        this->name = name;
        this->score = score;
    }

    // 정렬 기준은 '점수가 작은 순서'
    bool operator <(Student &student){
        return this->score < student.score;
    }
    
};

bool compare(int a, int b){
    return a > b;
}

int main(){
    SetConsoleOutputCP(65001);
    Student student[] = {
        Student("윤영진", 90),
        Student("이태민", 97),
        Student("전창열", 87),
        Student("안성현", 83),
        Student("심규선", 92)
    };
    sort(student, student+5);
    for(int i=0; i<5; i++){
        cout << student[i].name << ' ';
    }
}