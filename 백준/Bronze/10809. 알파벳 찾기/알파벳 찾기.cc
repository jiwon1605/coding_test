#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int main(void) {
	string s;
	cin >> s;
	int alphabet[26];

	for (int index = 0; index < 26; index++) {
		alphabet[index] = -1; //초기화
	}

	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < s.length(); j++) {
			if (i == ((int)s[j])) {
				if (alphabet[i - 97] > -1)
					break;
					
				alphabet[i-97] = j;
			}
		}
	}

	for (int index = 0; index < 26; index++) {
		cout << alphabet[index] << " ";
	}
	
}
