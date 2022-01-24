#include <bits/stdc++.h>
using namespace std;

int solution(int n) {

	vector<int> result;

	int answer = 0;

	while (n != 0) {
		int temp = n % 3;
		n /= 3;
		result.push_back(temp);
	}

	int weight = 1;

	for (int i = result.size()-1; i >=0; i--) {
		answer += (result[i] * weight);
		weight *= 3;
	}

	return answer;
}

//feedback : 인덱스로 접근하지말고, pop.back()함수를 사용하여 뒤로 접근해보자.