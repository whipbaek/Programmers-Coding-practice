#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int N, vector<int> stages) {

    vector<int>answer;
    multimap<double, int, greater<double>> m1; //multimap 내림차순 정렬
    sort(stages.begin(), stages.end());

    int all = stages.size();
    int idx = 0;

    for (int i = 1; i < N+1; i++) {
        int elem = 0;
        while(idx < stages.size() && stages[idx] == i){
            idx++;
            elem++;
        }
        //key: 실패율, value: 스테이지
        m1.insert(make_pair((double)elem / (double)all, i)); 
        all -= elem;
    }

    for (auto it = m1.begin(); it != m1.end(); it++)
        answer.push_back(it->second);

    return answer;
}