#include <bits/stdc++.h>
using namespace std;

map<string, int> m;
int arr[11];

void recursive(string str, int idx, string res) {

    if (idx == str.length()) {
        if (res.length() >= 2) {
            sort(res.begin(), res.end());
            if (m.find(res) == m.end())
                m.insert({ res,1 });
            else {
                m[res]++;
            }
        }
        return;
    }

    string tempres = res;
    tempres += str[idx];
    recursive(str, idx + 1, tempres);
    recursive(str, idx + 1, res);

}

vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer;

    for (auto val : orders) {
        if (val.length() == 2) {
            if (m.find(val) == m.end()) {
                m.insert({ val, 1 });
            }
            else {
                m[val]++;
            }
        }
        else if (val.length() > 2) {
            recursive(val, 0, "");
        }
    }

    //길이가 같을경우, 최대 카운트들만 남기는 과정
    for (auto val : m) {
        arr[val.first.length()] = max(arr[val.first.length()], val.second); 
    }


    //course에서 원하는 길이 && 최대 카운트 값들 추출
    for (auto val : m) {
        for (int i = 0; i < course.size(); i++) {
            if (val.first.length() == course[i]) {
                if (val.second>=2 && (val.second == arr[val.first.length()])) {
                    answer.push_back(val.first);
                }
            }
        }
    }
    
    return answer;

}