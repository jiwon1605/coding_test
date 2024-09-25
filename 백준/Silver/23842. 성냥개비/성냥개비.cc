#include <iostream>
#include <vector>

using namespace std;

// 각 숫자와 기호가 필요로 하는 성냥개비의 개수를 배열로 정의
vector<int> matchsticks = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };

// 두 자리 숫자가 필요한 성냥개비 개수를 계산
int getMatchsticks(int num) {
    return matchsticks[num / 10] + matchsticks[num % 10];
}

int main() {
    int N;
    cin >> N;

    N -= 4; // '+' 와 '=' 에 필요한 성냥개비 개수

    if (N < 0) {
        cout << "impossible";
        return 0;
    }

    // 모든 가능한 두 자리 수 조합을 시도해 봅니다.
    for (int A = 0; A < 100; A++) {
        for (int B = 0; B < 100; B++) {
            int C = A + B;
            // A, B, C가 모두 두 자리 숫자여야 하며, 성냥개비의 합이 정확히 N개인지 확인
            if (C < 100 && getMatchsticks(A) + getMatchsticks(B) + getMatchsticks(C) == N) {
                printf("%02d+%02d=%02d", A, B, C);
                return 0;
            }
        }
    }

    // 가능한 답이 없는 경우
    cout << "impossible";
    return 0;
}
