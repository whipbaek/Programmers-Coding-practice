#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<int> numbers, string hand) {
	string answer = "";

	int nowLeft = 10;
	int nowRight = 11;

	int dist[12][12]; // '*' : 10, '#' : 11
	fill(&dist[0][0], &dist[9][10], -1);

	//from Left to Center
	dist[1][2] = 1;
	dist[1][5] = 2;
	dist[1][8] = 3;
	dist[1][0] = 4;

	dist[4][2] = 2;
	dist[4][5] = 1;
	dist[4][8] = 2;
	dist[4][0] = 3;

	dist[7][2] = 3;
	dist[7][5] = 2;
	dist[7][8] = 1;
	dist[7][0] = 2;

	dist[10][2] = 4;
	dist[10][5] = 3;
	dist[10][8] = 2;
	dist[10][0] = 1;

	//from Right to Center

	dist[3][2] = 1;
	dist[3][5] = 2;
	dist[3][8] = 3;
	dist[3][0] = 4;

	dist[6][2] = 2;
	dist[6][5] = 1;
	dist[6][8] = 2;
	dist[6][0] = 3;

	dist[9][2] = 3;
	dist[9][5] = 2;
	dist[9][8] = 1;
	dist[9][0] = 2;

	dist[11][2] = 4;
	dist[11][5] = 3;
	dist[11][8] = 2;
	dist[11][0] = 1;

	//from Center to Center

	dist[2][2] = 0;
	dist[2][5] = 1;
	dist[2][8] = 2;
	dist[2][0] = 3;

	dist[5][2] = 1;
	dist[5][5] = 0;
	dist[5][8] = 1;
	dist[5][0] = 2;

	dist[8][2] = 2;
	dist[8][5] = 1;
	dist[8][8] = 0;
	dist[8][0] = 1;

	dist[0][2] = 3;
	dist[0][5] = 2;
	dist[0][8] = 1;
	dist[0][0] = 0;

	//process

	for (int i = 0; i < numbers.size(); i++) {
		int num = numbers[i];

		if ((num == 1) || (num == 4) || (num == 7)) {
			answer.push_back('L');
			nowLeft = num;
		}

		else if ((num == 3) || (num == 6) || (num == 9)) {
			answer.push_back('R');
			nowRight = num;
		}

		else { //2, 5, 8, 0 에 대한 처리
			if (dist[nowLeft][num] < dist[nowRight][num]) { //왼쪽 엄지가 더 가깝다면
				nowLeft = num;
				answer.push_back('L');
			}

			else if (dist[nowLeft][num] > dist[nowRight][num]) { //오른 엄지가 더 가깝다면
				nowRight = num;
				answer.push_back('R');
			}

			else { //거리가 같다면
				if (hand == "left") {
					nowLeft = num;
					answer.push_back('L');
				}
				else {
					nowRight = num;
					answer.push_back('R');
				}
			}
		}
	}

	return answer;
}