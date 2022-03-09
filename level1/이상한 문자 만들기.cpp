#include <bits/stdc++.h>
using namespace std;

string solution(string s) {

    for(int i=0; i<s.size(); i++) {
        for (int j = 0; ; j++) {
            if (s[i] == ' ' || i >= s.size()) break;

            if (j % 2) { //홀수번째 index -> 소문자
                if (s[i] >= 'A' && s[i] <= 'Z') s[i] += ' ';
            }
            else {
                if (s[i] >= 'a' && s[i] <= 'z') s[i] -= ' ';
            }
            i++;
        }
    }

    return s;
}


/*

대문자인지 소문자인지 검사하지말고, toupper와 tolower로 일반적으로 처리할 수 있다.

*/