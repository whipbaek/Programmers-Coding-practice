#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string num_s;
    
    for (int i = 0; i < s.length();) {
		char ch = s[i];
		if (ch >= '0' && ch <= '9') { //숫자라면 그냥 넣어준다.
			num_s.push_back(ch);
			i++;
			continue;
		}

		else {
			if (ch == 'z') { //zero
				num_s += "0";
				i += 4;
			}
			else if (ch == 'o') { //one
				num_s += "1";
				i += 3;
			}

			else if (ch == 't') { //two OR three
				if (s[i + 1] == 'w') { //two
					num_s += "2";
					i += 3;
				}
				else { //three
					num_s += "3";
					i += 5;
				}
			}

			else if (ch == 'f') { //four OR five
				if (s[i + 1] == 'o') { //four
					num_s += "4";
					i += 4;
				}
				else { //five
					num_s += "5";
					i += 4;
				}
			}

			else if (ch == 's') { //six OR seven
				if (s[i + 1] == 'i') { // six
					num_s += "6";
					i += 3;
				}
				else { // seven
					num_s += "7";
					i += 5;
				}
			}

			else if (ch == 'e') {
				num_s += "8";
				i += 5;
			}

			else if (ch == 'n') {
				num_s += "9";
				i += 4;
			}
		}
	
	}
	
    
    return answer = stoi(num_s);
}