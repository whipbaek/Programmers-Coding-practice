#include <bits/stdc++.h>
using namespace std;

long long solution(long long n) {
    long long answer = 0;

    for (long long i = 0; i <= sqrt(n);  i++) {
        if (i * i == n) {
            return (i + 1) * (i + 1);
        }
    }
    return -1;
}