#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (int val : arr) {
        if (!(val % divisor)) answer.push_back(val);
    }
    if (answer.empty()) answer.push_back(-1);
    sort(answer.begin(), answer.end());

    return answer;
}