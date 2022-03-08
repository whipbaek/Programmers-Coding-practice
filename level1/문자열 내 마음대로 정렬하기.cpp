#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> strings, int n) {

    vector<string> answer;
    multimap<char, int> m;

    sort(strings.begin(), strings.end());

    for (int i = 0; i < strings.size(); i++)
        m.insert(make_pair(strings[i][n], i));

    for (auto val : m)
        answer.push_back(strings[val.second]);

    return answer;
}