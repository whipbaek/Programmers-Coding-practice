#include <bits/stdc++.h>
using namespace std;

string s[3] = { "4", "1", "2" };

string solution(int n) {
	string answer = "";

	while (n > 0) {
		answer += s[n % 3];
		if (n % 3 == 0) n = (n / 3) - 1;
		else n /= 3;
	}
   	reverse(answer.begin(), answer.end());
	return answer;
}