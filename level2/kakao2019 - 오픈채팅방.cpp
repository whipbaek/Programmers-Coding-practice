#include <bits/stdc++.h>
using namespace std;

#define MOVE 0
#define UID 1
#define NICK 2

vector<string> solution(vector<string> record) {
    vector<string> answer;
    string sarr[3];
    vector<pair<string,string>> movement;
    map<string, string> pv;

    for (int i = 0; i < record.size(); i++) {

        stringstream ss(record[i]);
        int cnt = 0;
        while (ss >> sarr[cnt++]);

        movement.push_back(make_pair(sarr[MOVE], sarr[UID]));
        if (sarr[MOVE] != "Leave")
        pv[sarr[UID]] = sarr[NICK];

    }

    for (int i = 0; i < movement.size(); i++) {
        string f_val = "";
        string uid = movement[i].second;
        string move = movement[i].first;
        string nickname;

        nickname = pv[uid];

        f_val += nickname;
        if (move == "Enter") {
            f_val += "님이 들어왔습니다.";
        }
        else if (move == "Leave") {
            f_val += "님이 나갔습니다.";
        }
        else continue;

        answer.push_back(f_val);
    }
    return answer;
}
