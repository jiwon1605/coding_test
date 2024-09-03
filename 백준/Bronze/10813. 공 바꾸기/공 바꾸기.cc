#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    int N; //바구니 개수
    int M; //방법을 알려줄 줄 수

    int i; //i번째 바구니
    int j; //j번째 바구니

    cin >> N;
    cin >> M;

    vector<int> answer(N); //정답


    for (int index = 0; index < N; index++) {
        answer[index] = index+1;//초기화
    }

    for (int index = 0; index < M; index++) {
        cin >> i;
        cin >> j;

        swap(answer[i-1], answer[j-1]);

    }

    for (int index = 0; index < N; index++) {
        cout << answer[index] << " " ;
    }

}
