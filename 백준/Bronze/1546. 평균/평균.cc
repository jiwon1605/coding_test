#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	int testCnt; //시험 과목 개수
	float maxScr; //최고 점수 변수
	float avrScr; //평균 점수
	cin >> testCnt;

	vector<int> testScr(testCnt); //과목별 원래 점수
	vector<float>lieScr(testCnt); //과목별 주작 점수

	
	for (int index = 0; index < testCnt; index++) {
		cin >> testScr[index];
	}
	maxScr = *max_element(testScr.begin(), testScr.end()); //최대값

	for (int index = 0; index < testCnt; index++) { //주작
		lieScr[index] = (testScr[index] / maxScr) * 100;
	}

	float sum = 0;
	for (int index = 0; index < testCnt; index++) {
		sum += lieScr[index];
	}

	avrScr = sum / testCnt;

	cout << avrScr;
}
