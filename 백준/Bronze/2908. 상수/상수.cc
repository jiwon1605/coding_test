#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int main(void) {
	string first; //첫번째 수
	string second; //두번째 수

	cin >> first;
	cin >> second;

	reverse(first.begin(), first.end());
	reverse(second.begin(), second.end());
	
	int F = stoi(first);
	int S = stoi(second);

	cout << max(F, S);

}
