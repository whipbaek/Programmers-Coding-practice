#include <string>
#include <vector>

using namespace std;

int recursive(int sum, int target, int idx, vector<int> numbers) {
    
    int answer = 0;

    if (idx == numbers.size()) {
        if (target == sum) return 1;

        return 0;
    }

    answer += recursive(sum + numbers[idx], target, idx + 1, numbers);
    answer += recursive(sum - numbers[idx], target, idx + 1, numbers);

    return answer;
}

int solution(vector<int> numbers, int target) {
    return recursive(0, target, 0, numbers);
}