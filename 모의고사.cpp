#include <bits/stdc++.h>
using namespace std;

vector<int> mg1 = { 1,2,3,4,5 };
vector<int> mg2 = { 2,1,2,3,2,4,2,5 };
vector<int> mg3 = { 3,3,1,1,2,2,4,4,5,5 };

int j, k, l;

vector<int> solution(vector<int> answers) {

	vector<int> m1 (4);

	for (int i = 0; i < answers.size(); i++) {
		if (!(i % 5)) j = 0;
		if (!(i % 8)) k = 0;
		if (!(i % 10)) l = 0;

		if (answers[i] == mg1[j++]) m1[1] += 1;
		if (answers[i] == mg2[k++]) m1[2] += 1;
		if (answers[i] == mg3[l++]) m1[3] += 1;
	}
	vector<int> answer;

	int mv = *max_element(m1.begin() + 1, m1.end());
	for (int i = 1; i < m1.size(); i++) {
		if (m1[i] == mv) answer.push_back(i);
	}

	sort(answer.begin(), answer.end());

	return answer;
	
}