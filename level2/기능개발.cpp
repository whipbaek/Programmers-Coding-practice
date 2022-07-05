#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;
	vector<int> days(progresses.size(), 0);
	vector<bool> check(days.size(), false);

	while (1) {
		for (int i = 0; i < progresses.size(); i++) {
			progresses[i] += speeds[i];
			if(!check[i]) days[i]++;

			if (progresses[i] >= 100) {
				if (i != 0) {
					if (check[i - 1] != false) {
						check[i] = true;
					}
				}
				else {
					check[i] = true;
				}
			}
		}

		int possible = 0;
		for (int i = 0; i < check.size(); i++) {
			if (check[i]) possible++;
		}

		if (possible == check.size()) break;
	}

	int cnt = 0;
	for (int i = 0; i < days.size(); i++) {
		if (i == 0) answer.push_back(1);
		else {
			if (days[i] == days[i - 1]) {
				answer[cnt]++;
			}
			else {
				answer.push_back(1);
				cnt++;
			}
		}
	}

	return answer;
}