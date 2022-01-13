#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

bool issosu(int num) {
    int loop = sqrt(num);
    for (int i = 2; i <= loop; i++) {
        if (!(num % i)) return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    int len = nums.size();
    for (int i = 0; i < len - 2; i++) {
        for (int j = i + 1; j < len - 1; j++) {
            for (int k = j + 1; k < len; k++) {
                int val = nums[i] + nums[j] + nums[k];
                if (issosu(val)) answer++;
            }
        }
    }

    return answer;
}