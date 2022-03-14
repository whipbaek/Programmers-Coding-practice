#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int getgcd(int x, int y){
    int a,b,c;
    if(x>y){
        a = x;
        b = y;
    } else{
        a = y;
        b = x;
    }

    while(b){
        c = a%b;
        a = b;
        b = c;
    }

    return a;
}


ll solution(int w, int h) {
    int gcd = getgcd(w, h);

    ll answer = (ll)w * h - (w + h - gcd);
    return answer;
}

/*

최대 공약수를 이용해 제외되는 사각형을 알아야하는 문제
단번에 생각해서 풀기에는 어려움이 있다고 생각..

*/