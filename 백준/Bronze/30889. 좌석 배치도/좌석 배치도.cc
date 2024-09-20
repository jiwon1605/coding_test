#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int people; //예매한 손님 수
	cin >> people;


	vector<string>seat(people);

	for (int index = 0; index < people; index++) {
		cin >> seat[index];
	}

	vector<char>row(people);
	vector<int>col(people);

	//row, col 초기화
	for (int index = 0; index < people; index++) {
		row[index] = seat[index][0];
		col[index] = stoi(seat[index].substr(1));
	}

	//result 함수 초기화 & 출력
	for (int i = 'A'; i < 'K'; i++) {
		for (int j = 0; j < 20; j++) {
			bool found = false; //찾았나 확인하는 변수 false로 초기화

			for (int k = 0; k < people; k++) {
				if ((row[k] == i) && (col[k] == (j + 1))) {
					found = true;
					break;
				}

			}

			if (found)
				cout << 'o';
			else
				cout << '.';
		}
		cout << endl;

	}
}
