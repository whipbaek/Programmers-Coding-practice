#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";

    num&1 ? answer = "Odd" : answer= "Even";

    return answer;
}

/*

return num & 1 ? "Odd" : "Even"; 이와 같이 한줄로 return 할 수 있다.

return을 가장 앞에 써주고 뒤에 삼항 조건문을 써주는것이 포인트이다!.

*/