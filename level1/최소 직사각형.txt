#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> sizes) {
	int answer = 0;
	
	vector<int>small;
	vector<int>big;

	for (int i = 0; i < sizes.size(); i++) {
		if (sizes[i][0] < sizes[i][1]) {
			small.push_back(sizes[i][0]);
			big.push_back(sizes[i][1]);
		}
		else {
			small.push_back(sizes[i][1]);
			big.push_back(sizes[i][0]);
		}
	}

	answer = *max_element(small.begin(), small.end()) * *max_element(big.begin(), big.end());

	return answer;
}