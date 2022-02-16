#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;

    for (int i = 0; i < 10; i++) {
        auto it = find(numbers.begin(), numbers.end(), i);
        if (it == numbers.end()) answer += i;
    }

    return answer;
}

//총합(45)에서 존재하는 숫자를 빼도 가능하다.