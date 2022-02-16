#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> m1;
    string answer = "";
    for (string ath : participant) {
        m1[ath]++;
    }

    for (string ath : completion) {
        m1[ath]--;
    }

    for (auto temp : m1) {
        if (temp.second > 0) {
            answer = temp.first;
            break;
        }
    }

    return answer;
}