#include <bits/stdc++.h>
using namespace std;

string solution(string s, int n) {

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                if (s[i] == 'Z') s[i] = 'A';
                else s[i] += 1;
            }

            else if (s[i] >= 'a' && s[i] <= 'z') {
                if (s[i] == 'z') s[i] = 'a';
                else s[i] += 1;
            }
        }
    }

    return s;
}