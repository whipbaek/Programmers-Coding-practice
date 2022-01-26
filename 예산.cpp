#include<bits/stdc++.h>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;

    sort(d.begin(), d.end());
    for (int t : d) {
        if (t > budget) break;
        budget -= t;
        answer++;
    }

    return answer;
}