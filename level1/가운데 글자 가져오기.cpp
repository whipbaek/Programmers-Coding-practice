#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
	string answer = "";
	
	if (!(s.size() % 2))  answer.push_back(s[(s.size() / 2)-1]);
	answer.push_back(s[s.size() / 2]);
	return answer;
}