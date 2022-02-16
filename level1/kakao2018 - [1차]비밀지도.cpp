#include <bits/stdc++.h>
 
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<int> res;
    for (int i = 0; i < n; i++) res.push_back(arr1[i] | arr2[i]);
    for (int i = 0; i < res.size(); i++) {
        string temp = "";
        for (int j = n-1; j >= 0; --j) {
            int result = res[i] >> j & 1;
            if (result == 1) temp.push_back('#');
            else temp.push_back(' ');
        }
        answer.push_back(temp);
    }
    return answer;
}