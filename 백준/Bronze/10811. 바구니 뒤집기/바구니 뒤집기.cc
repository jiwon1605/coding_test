#include <iostream>
#include <string>
#include <algorithm>
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

        for (int index = i - 1; index < j; index++) {
            if (i == j)
                break;

            swap(answer[i-1], answer[j-1]);
            i++;
            j--;
        }

    }

    for (int index = 0; index < N; index++) {
        cout << answer[index] << " " ;
    }

}
