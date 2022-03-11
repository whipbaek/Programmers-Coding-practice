#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr){
    vector<int> answer;

    if (arr.size() == 1) {
        answer.push_back(-1);
        return answer;
    }

    vector<int>::iterator it = min_element(arr.begin(), arr.end());
    arr.erase(it);

    return arr;
}

/*

arr.erase(min_element(arr.begin(), arr.end())); 와 같이 한줄로 처리도 가능하다.

answer을 선언해서 반환할 필요 없이 {-1} 을 반환하여도 생성자를 통해 정상적으로 vector로 반환된다.

*/