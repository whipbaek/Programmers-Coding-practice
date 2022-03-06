#include <bits/stdc++.h>
using namespace std;

long long solution(int price, int money, int count) {

	long long answer = 0;
	while (count) answer += price * count--;
	
	answer = money - answer;

	if (answer < 0)
		return -answer;
	return 0;
}