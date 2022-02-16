#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int m, int n, vector<vector<int>> picture) {

    bool check[101][101] = { 0, };
    int dx[] = { 0,0,1,-1 };
    int dy[] = { 1,-1,0,0 };

    map<int, int> m_map; // m[그림] = 칸 수, numofpic = m.size()
    vector<int> answer(2);
    int number_of_area = 0;
    int max_size_of_one_area = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (check[i][j]== false && picture[i][j]) { //방문하지 않았고, 0이 아닌 값
                number_of_area++;
                queue<pair<int, int>> q; //x,y좌표 가지는 queue선언
                q.push(make_pair(i, j));
                check[i][j] = true;
                int val = picture[i][j]; //그림종류 선택
                int number_of_area = 1;

                while (!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    for (int i = 0; i < 4; i++) { //상하좌우 검사
                        int nx = x + dx[i];
                        int ny = y + dy[i];

                        if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
                            if (check[nx][ny] == false && picture[nx][ny] == val ) {

                                check[nx][ny] = true;
                                number_of_area++;
                                q.push(make_pair(nx, ny));
                            }
                        }
                    }
                }
                m_map[val] = max(m_map[val], number_of_area);
            }
        }
    }

    for (auto it : m_map) 
        max_size_of_one_area = max(max_size_of_one_area, it.second);

    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}