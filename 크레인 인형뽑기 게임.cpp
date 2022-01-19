#include <bits/stdc++.h>
using namespace std;

/*
example board input : [[0,0,0,0,0],[0,0,1,0,3],[0,2,5,0,1],[4,2,4,4,2],[3,5,1,3,1]]

     [00000]
     [00103]
     [02501]
     [42442]
     [35131]

*/
int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> Basket;
    
	for (int i = 0; i < moves.size(); i++) {
		int idx = (moves[i]) - 1; 
		int val = 0;
			for (int j = 0; j < board.size(); j++) {
				if (board[j][idx] != 0) { 
					val = board[j][idx];
                    board[j][idx] = 0; 
					break; 
				}
			}
		if (val != 0) { 
			if (Basket.empty()) { 
				Basket.push(val); 
			}
			else { 
				if (val == Basket.top()) { 
					Basket.pop(); 
					answer += 2; 
				}
				else { 
					Basket.push(val); 
				}
			}
		}
	}
    
    return answer;
}