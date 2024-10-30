#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

int main(void) {
	int answer[6] = { 1,1,2,2,2,8 };
	string str;
	int arr[6] = { 0,0,0,0,0,0 };
	int result[6] = { 0,0,0,0,0,0 };
	
	for (int index = 0; index < 6; index++) {
		cin >> arr[index];
	}

	for (int i = 0; i < 6; i++) {
		if (arr[i] != answer[i]) {
			result[i] = answer[i] - arr[i];
		}
	}

	for (int i = 0; i < 6; i++) {
		cout << result[i] << " ";
	}

	return 0;

}