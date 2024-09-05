#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int main(void) {
	int T; //테스트 케이스 갯수
	string S; //입력받을 문자열
	int cnt; //반복 횟수
	cin >> T;
	
	for (int index = 0; index < T; index++) {
		cin >> cnt;
		cin >> S;

		for (int i = 0; i < S.length(); i++) {
			for (int j = 0; j < cnt; j++) {
				cout << S[i];
			}
		}

		cout << endl;

	}

	
}
