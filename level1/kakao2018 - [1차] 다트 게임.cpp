
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
#include <bits/stdc++.h>
using namespace std;

int solution(string dartResult) {

    int answer = 0;
    int s[3] ={0,0,0};
    int s_idx = 0;

    for (int i=0; i<dartResult.length(); i++) {
        char ch = dartResult[i];
        if (ch >= '0' && ch <= '9') {
            if (ch == '1') {
                if (dartResult[i + 1] == '0') {
                    s[s_idx++] += 10;
                    i += 1;
                    continue;
                }
            }
            s[s_idx++] = ch - '0';
        }

        else if (ch == 'D') {
            s[s_idx - 1] = pow(s[s_idx - 1], 2);
        }
        else if (ch == 'T') {
            s[s_idx - 1] = pow(s[s_idx - 1], 3);
        }

        else if (ch == '*') {
            if (s_idx == 1) {
                s[s_idx - 1] *= 2;
            }
            else {
                s[s_idx - 1] *= 2;
                s[s_idx - 2] *= 2;
            }
        }
        else if (ch == '#') {
            s[s_idx - 1] *= -1;
        }
    }

    answer = s[0] + s[1] + s[2];

    return answer;
}
