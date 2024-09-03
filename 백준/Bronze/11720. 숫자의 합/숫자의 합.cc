#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int main(void) {
	int sum =0;
	int cnt; //숫자 갯수
	cin >> cnt;

	string str; //숫자들
	cin >> str;

	vector<int> nums(cnt);

	for (int index = 0; index < str.length(); index++) {
		nums[index] = ((int)str[index]-48);
	}

	for (int index = 0; index < str.length(); index++) {
		sum += nums[index];
	}

	cout << sum;
	
}
