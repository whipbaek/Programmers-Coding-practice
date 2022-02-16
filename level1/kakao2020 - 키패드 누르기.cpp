#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<int> numbers, string hand) {

    string answer = "";
    int nowleft = 10;
    int nowright = 12;
    int pos[13][2] = { {},
    {0,0},{0,1},{0,2},
    {1,0},{1,1},{1,2},
    {2,0},{2,1},{2,2},
    {3,0},{3,1},{3,2}
    };

    for (int i = 0; i < numbers.size(); i++) {
        int num = numbers[i];
        if (num == 0) num = 11;

        int l_dist = abs(pos[nowleft][0] - pos[num][0]) + abs(pos[nowleft][1] - pos[num][1]);
        int r_dist = abs(pos[nowright][0] - pos[num][0]) + abs(pos[nowright][1] - pos[num][1]);

        if (num % 3 == 1) { //1,4,7,10이면
            nowleft = num;
            answer += "L";
        }

        else if (num % 3 == 0) { //3,6,9,12면
            nowright = num;
            answer += "R";
        }

        else { //2, 5, 8, 0(11) 이면
            if (l_dist < r_dist) { //왼손이 더 가까우면
                nowleft = num;
                answer += "L";
            }
            else if (l_dist > r_dist) { //오른손이 더 가까우면
                nowright = num;
                answer += "R";
            }

            else { //거리가 같다면
                if (hand == "left") {
                    nowleft = num;
                    answer += "L";
                }
                else {
                    nowright = num;
                    answer += "R";
                }
            }
        }
    }

    return answer;
}