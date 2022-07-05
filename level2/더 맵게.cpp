#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> scoville, int K) {
	int answer = 0;
	

	priority_queue<int, vector<int>, greater<int>> pq;


	for (int i = 0; i < scoville.size(); i++) pq.push(scoville[i]);

	while (1) {
		if (pq.size() == 1 && pq.top() < K) {
			answer = -1;
			break;
		}

		if (pq.top() < K) {
			int v1 = pq.top();
			pq.pop();
			int v2 = pq.top();
			pq.pop();
			pq.push(v1 + v2 * 2);

			answer++;
		}

		if (pq.top() > K) break;
		

	}

	return answer;
}