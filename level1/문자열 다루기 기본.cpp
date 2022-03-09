#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    if(s.size() == 4 || s.size() == 6){
        for(auto val : s){
            if(!(val >='0' && val<='9')) return false;
        }
        return true;
    }
    return false;
}