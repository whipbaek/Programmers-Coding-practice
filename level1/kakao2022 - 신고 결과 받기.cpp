#include <string>
#include <vector>
#include <regex>
#define MAXV 1001

using namespace std;

int singo[MAXV]; //누가, 몇번 신고당하였는지를 저장하는 배열

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    vector<string> count[MAXV]; //누가, 누구를 신고하였는지 저장하는 연결리스트
    
    int len = id_list.size();
    regex re("(^[a-z]+)\\s([a-z]+)");
    smatch match;

    for (const auto& id : report) {
        if (regex_match(id, match, re)) { //match[1] : 신고자, match[2] : 피신고자
            int idx = find(id_list.begin(), id_list.end(), match[1]) - id_list.begin(); //신고자의 인덱스를 알아냄

            if (find(count[idx].begin(), count[idx].end(), match[2]) == count[idx].end()) { // 피신고자가 신고자의 연결리스트에 추가되어 있지 않다면 (중복방지)
                count[idx].push_back(match[2]); //추가해줌
                
                int idx2 =  find(id_list.begin(), id_list.end(), match[2]) - id_list.begin();
                singo[idx2]++; //신고당한 횟수도 늘려줌
            }
        }
    }
    
     for (int i = 0; i < len; i++) { //1.신고자의 피신고자들 목록을 확인후에, 2.그들이 일정 신고횟수(k)가 넘어갔다면 3.fvalue에 값을 더해준다.
        int fvalue = 0;
        for (int j = 0; j < count[i].size(); j++) { 
            int tempidx = find(id_list.begin(), id_list.end(), count[i][j]) - id_list.begin(); //피신고자의 인덱스를 구함
            if (singo[tempidx] >= k) { //일정횟수가 넘어갔다면
                fvalue++; //fvalue 증가(신고로 정지된 계정의 수)
            }
        }
        answer.push_back(fvalue);
    }
    
    return answer;
}