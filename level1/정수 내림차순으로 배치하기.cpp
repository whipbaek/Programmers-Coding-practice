#include <bits/stdc++.h>
using namespace std;

long long solution(long long n) {
    long long answer = 0;

    string str = to_string(n);
    sort(str.begin(), str.end(), greater<>());
    answer = atoll(&str[0]);

    return answer;
}

/*

atoall 대신 stoall이 존재한다. (string to long long)

atoall은 매개변수로 char * 을 받는다. 그래서 첫번째 원소의 주소값을 넘겨주어야함.

대신 stoll 은 매개변수를 string& 로 받기때문에 string 변수를 활용하기에 더 편하다.

*/