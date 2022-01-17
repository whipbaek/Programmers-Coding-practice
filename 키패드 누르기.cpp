#include <bits/stdc++.h>

using namespace std;

/*
	처음 왼손 엄지는 '*'
	처음 오른 엄지는 '#'

	1. 엄지는 상하좌우 4가지 방향으로 이동 가능, 이동 한칸은 거리 1에 해당
	2. 왼쪽 열의 1, 4, 7은 엄지 왼손
	3. 오른 열의 3, 6, 9는 오른 엄지
	4. 가운데의 2, 5, 8, 0은 두 엄지중 더 가까운곳
		4-1. 거리가 같다면 왼손잡이냐, 오른손잡이냐에 따라 판단한다.

	numbers: 순서대로 누를 번호가 담긴 배열
	hand: 왼손잡이, 오른손잡이

	*/

int main(void) {

	vector<int> numbers;
	string hand;
	string answer = "";

	int nowLeft;
	int nowRight;

	int dist[10][10];
	fill(&dist[0][0], &dist[9][10],-1);

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

		else { 
			if(dist[])
		}

	}
	*/

	return 0;
}