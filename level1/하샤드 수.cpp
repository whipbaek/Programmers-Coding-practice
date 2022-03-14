#include <bits/stdc++.h>
using namespace std;

bool solution(int x) {

    string str = to_string(x);
    int sum = 0;

    for (char val : str) sum += val - '0';

    return x % sum ? false : true;

}