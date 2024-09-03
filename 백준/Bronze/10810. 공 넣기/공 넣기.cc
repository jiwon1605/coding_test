#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    int N; //바구니 개수
    int M; //방법을 알려줄 줄 수

    int i; //i번째 바구니부터
    int j; //j번째 바구니까지
    int k; //k개의 공 넣기 (i 바구니 공 갯수 + j 바구니 공 갯수 = k)


    cin >> N;
    cin >> M;

    vector<int> answer(N, 0);//정답


    for (int index = 0; index < M; index++) {
        cin >> i;
        cin >> j;
        cin >> k;

        for (int index = i; index <= j; index++) {
            answer[index-1] = k;
        }
    }

    for (int index = 0; index < N; index++) {
        cout << answer[index] << " " ;
    }

}
