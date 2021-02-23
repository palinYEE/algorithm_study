# algorithm_study

### 목적

본 리포지토리는 동빈나 선생님의 실전 알고리즘 강좌의 공부 내용을 기록한다. 링크는 다음과 같다. 

 * <https://www.youtube.com/watch?v=qQ5iLNjpxSk&list=PLRx0vPvlEmdDHxCvAQS1_6XV4deOwfVrz&index=1>

하루에 한강좌씩 가볍게 듣는 형식으로 공부 할 예정이다. (금요일은 쉬는날)

### 다짐

그저 꾸준히 진행하자.

### 환경

코드 작성은 vscode를 사용하며, 컴파일러는 다음과 같다. 
<center> gcc version 6.3.0 (MinGW.org GCC-6.3.0-1) </center>


### 진행 상황

 * 2021-01-19 : 
    * 2강 - 정렬 알고리즘의 개요와 선택 정렬(Selection Sort)
 * 2021-01-20 :
      * 버블 정렬(Bubble Sort) 
 * 2021-01-21 : 
      * 삽입 정렬(Insertion Sort)
 * 2021-01-24 : 
      * 퀵 정렬 (Quick Sort)
 * 2021-01-25 : 
      * 백준 온라인 저지 문제 풀기 
          * (https://www.acmicpc.net/problem/2752)
          * (https://www.acmicpc.net/problem/2750)
          * (https://www.acmicpc.net/problem/2751)

 * 2021-01-27 :
      * 병합 정렬 (Merge Sor)

 * 2021-01-30 :
      * C++ STL sort() 함수 다루기 - 1
 * 2021-01-31 :
      * C++ STL sort() 함수 다루기 - 2
 * 2021-02-02 :
      * 힙 정렬 (heap sort)
 * 2021-02-03 :
      * 계수 정룔 (Counting Sort)
 * 2021-02-04 : 
      * 백준 온라인 저지 문제 풀기 
          * (https://www.acmicpc.net/problem/1181)
          * (https://www.acmicpc.net/problem/1431)
          * (https://www.acmicpc.net/problem/1431)
 * 2021-02-11 :   
      * 너비 우선 탐색 (bfs)
 * 2021-02-12 : 
      * 깊이 우선 탐색 (dfs)
 * 2021-02-17 : 
      * Union-Find
 * 2021-02-18 : 
      * kruskal algorithm
      * 에러 발생 : Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/algorithm:715:71: error: invalid operands to binary expression ('const Edge_node' and 'const Edge_node')
      * 2021-02-20 에러 해결 :     
     ```
      bool operator <(const Edge_node &edge) const {
        return this->distance < edge.distance;
     }
     ```
 * 2021-02-20 : 
      * binary tree
 * 2021-02-21 : 
      * dynamic programming 기본 원리
 * 2021-02-22 : 
      * dynamic programming example
      * 백준 2133, 11726, 11727 