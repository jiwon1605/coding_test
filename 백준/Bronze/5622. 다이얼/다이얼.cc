#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int main(void) {
	string numbers[9] = {" ","ABC", "DEF", "GHI", "JKL", "MNO", "PQRS","TUV","WXYZ"};
	string input;
	cin >> input; //단어 입력

	int result = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < numbers[i].length(); j++) {
			for (int k = 0; k < input.length(); k++) {
				if (numbers[i][j] == input[k]) { //동일할 때
					result += (i + 2);
				}
			}
		}
	}

	cout << result;
}
