#include <string>
#include <vector>

using namespace std;

string func(string str) {

	string new_id = str;


	for (int i = 0; i < new_id.length(); i++) {
		new_id[i] = tolower(new_id[i]);
	}

	//2. 숫자, 영어, -, ., _ 를 제외한 특수문자 제거

	vector<char> new_id2;
	vector<char> new_id3;

	for (int i = 0; i < new_id.length(); i++) {
		char ch = new_id[i];
		if (isalpha(ch) || isdigit(ch) ||
			(ch == '.') || (ch == '-') || (ch == '_')) {
			new_id2.push_back(ch);
		}
	}

	//3. 마침표가 2개이상일 경우 제거

	for (int i = 0; i < new_id2.size(); i++) {
		if (i == 0) {
			new_id3.push_back(new_id2[i]);
			continue;
		}

		if (new_id2[i] == '.') {
			if (new_id3.back() == '.') continue;
		}

		new_id3.push_back(new_id2[i]);
	}

	new_id2.clear();

	//4. 앞뒤의 마침표를 제거

	for (int i = 0; i < new_id3.size(); i++) {
		if (i == 0) {
			if (new_id3[i] == '.') continue;
		}

		if (i == new_id3.size() - 1) {
			if (new_id3.back() == '.') continue;
		}

		new_id2.push_back(new_id3[i]);
	}

	//빈 문자열이면 a삽입
	if (new_id2.empty()) {
		new_id2.push_back('a');
	}


	int len = new_id2.size();

	//15보다 사이즈가 크다면
	if (len > 15) {
		for (int i = 0; i < 16; i++) {
			new_id[i] = new_id2[i];
		}

		new_id.erase(15, new_id.length() - 15);
	}
	else {
		for (int i = 0; i < len; i++) {
			new_id[i] = new_id2[i];
		}
		new_id.erase(len, new_id.length() - len);
	}


	while (new_id.length() <= 2) {
		new_id.push_back(new_id.back());
	}


	return new_id;
}

string solution(string new_id) {
    
    new_id = func(new_id);
    new_id = func(new_id); //1번 수정과정에서 부족한게 있을수 있기에 2번 시행
    
    string answer = new_id;
    return answer;
}