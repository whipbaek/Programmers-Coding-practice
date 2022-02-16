#include <bits/stdc++.h>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> whoget(n + 1, 1);

    sort(reserve.begin(), reserve.end()); //1번 학생부터 검사하기 위해서 (효율성)

    int answer = 0;

    for (int i = 0; i < reserve.size(); i++) whoget[reserve[i]]++;
    for (int i = 0; i < lost.size(); i++) whoget[lost[i]]--;

    for (int i = 0; i < reserve.size(); i++) {
        if (whoget[reserve[i]] == 2) { //여벌의 체육복이 있다면
            if ((reserve[i] != 1) && (whoget[reserve[i] - 1] == 0)) { //앞의 친구가 없다면
                whoget[reserve[i] - 1]++;
                whoget[reserve[i]]--;
            } 
            else if ((reserve[i] != n ) && (whoget[reserve[i] + 1] == 0)) { //뒤의 친구가 없다면
                whoget[reserve[i] + 1]++;
                whoget[reserve[i]]--;
            }
        }
    }

    for (int i = 1; i < whoget.size(); i++) if (whoget[i]) answer++;

    return answer;
}