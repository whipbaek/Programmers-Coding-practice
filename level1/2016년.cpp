#include <bits/stdc++.h>

using namespace std;

string solution(int a, int b) {
    string answer = "";

    map<int, int> m;
    m.insert(make_pair(1, 31));
    m.insert(make_pair(2, 60));
    m.insert(make_pair(3, 91));
    m.insert(make_pair(4, 121));
    m.insert(make_pair(5, 152));
    m.insert(make_pair(6, 182));
    m.insert(make_pair(7, 213));
    m.insert(make_pair(8, 244));
    m.insert(make_pair(9, 274));
    m.insert(make_pair(10, 305));
    m.insert(make_pair(11, 335));
    m.insert(make_pair(12, 366));
    int val = m[a - 1] + b;
    switch (val%7) {
    case 1: answer = "FRI"; break;
    case 2: answer = "SAT"; break;
    case 3: answer = "SUN"; break;
    case 4: answer = "MON"; break;
    case 5: answer = "TUE"; break;
    case 6: answer = "WED"; break;
    case 0: answer = "THU"; break;
    }
    return answer;
}