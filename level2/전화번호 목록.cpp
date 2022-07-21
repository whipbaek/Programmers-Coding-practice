#include <bits/stdc++.h>
using namespace std;

const int SIZE = 10; // 0 ~ 9 총 10개
bool possible = true;

struct TrieNode {
    TrieNode* Node[SIZE];
    bool isEnd;

    TrieNode() {
        isEnd = false;
        for (int i = 0; i < SIZE; i++) Node[i] = nullptr;
    }

    void Insert(const string& key, int index) {

        if (index == key.length()) { //문자열의 끝에 도달했다면
            isEnd = true;
            return;
        }

        if (isEnd) {
            possible = false; //중간에 끝이난다면 -> 접두사가 존재한다는 뜻
        }

        else {
            int next = key[index] - '0'; // 숫자로 변환
            if (Node[next] == nullptr) {
                Node[next] = new TrieNode();
            }
            Node[next]->Insert(key, index + 1);

        }
    }
};


bool solution(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end()); // 길이가 짧은 순으로 정렬해야함 
    TrieNode root;
    for (string val : phone_book) root.Insert(val, 0);
    return possible;
}