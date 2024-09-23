#include <iostream>
#include <vector>
#include <cstring>


using namespace std;

int main(void) {
	int N; //세로 길이 정수
	int M; //가로 길이 정수

	cin >> N;
	cin >> M;

	vector < vector <char> > draw(N, vector <char>(M));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> draw[i][j];
		}
	}

	vector < vector <char> > temp(N, vector <char>(M));
	vector < vector <char> > result(N, vector <char>(M));


	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) {
			temp[i][M - j - 1] = draw[i][j];          // y축 대칭

		}

	for(int i=0;i<N;i++)
		for (int j = 0; j < M; j++) {
			if ((temp[i][j] == '.') && (draw[i][j] == '.'))
				result[i][j] = '.';

			else if ((temp[i][j] == '.') && (draw[i][j] != '.'))
				result[i][j] = draw[i][j];

			else if ((temp[i][j] != '.') && (draw[i][j] == '.'))
				result[i][j] = temp[i][j];
		}


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << result[i][j];
		}

		cout << endl;
	}


}