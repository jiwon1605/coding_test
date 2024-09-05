#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int main(void) {
	char empty = ' '; //공백
	string s;
	int cnt = 1; //단어 갯수
	int index = 0;

	getline(cin, s); //공백포함 문자열 입력

	//첫글자가 공백인 경우-> cnt로 입력 안함
	if (s[0] == empty) {
		index++;

	}

	while (index < s.length()) {

		if (s[index] == empty)
			cnt++;

		index++;
	}

	if (s.back() == empty)
		cnt--;


	cout << cnt;
}
