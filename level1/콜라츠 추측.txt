#include<bits/stdc++.h>
using namespace std;

int solution(int num) {
    long ans = (long)num;

    for(int i=0;;i++){
        if(i==500) return -1;

        if(ans == 1) return i;

        if(!(ans%2)) ans /= 2;

        else  ans = (ans*3 + 1);     

    }
}

/*

매개변수는 int로 받아와야 문제에서 받아들여지지만
실제로는 num을 int값으로 계속 계산하다보면 overflow가 일어난다.
long값이나 그 이상의 값으로 변경해주어야 에러없이 문제를 통과함..

*/