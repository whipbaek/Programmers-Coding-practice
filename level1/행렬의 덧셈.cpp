#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {

    vector<vector<int>> answer;

    for (int i = 0; i < arr1.size(); i++) {
        vector<int> v1 = arr1[i];
        vector<int> v2 = arr2[i];
        vector<int> temp;
        for (int j = 0; j<v1.size(); j++) {
            temp.push_back(v1[j] + v2[j]);
        }

        answer.push_back(temp);

    }

    return answer;

}