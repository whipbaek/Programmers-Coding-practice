#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {

	int ranking[7] = { 6, 6, 5, 4, 3, 2, 1 };
	int zeronum = 0;
	int matchnum = 0;

	for (auto val : lottos) {
		if (val == 0) {
			zeronum++; continue;
		}
		auto it = find(win_nums.begin(), win_nums.end(), val);
		if (it != win_nums.end())
			matchnum++;
	}

	vector<int> answer;
	answer.push_back(ranking[matchnum + zeronum]);
	answer.push_back(ranking[matchnum]);

	return answer;
}