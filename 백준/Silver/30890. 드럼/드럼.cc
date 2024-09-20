#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// 최소 공배수 계산 함수
int lcm(int a, int b) {
    return (a*b) / gcd(a, b);
}

int main() {
    int X, Y;
    cin >> X >> Y;

    int L = lcm(X, Y); // 최소공배수 구하기

    // X와 Y에 맞춰 패턴 출력
    for (int i = 1; i <= L; i++) {
        bool left = (i % (L / X) == 0); // 왼손이 연주하는지 확인
        bool right = (i % (L / Y) == 0); // 오른손이 연주하는지 확인

        if (left && right)
            cout << 3; // 양손 모두 연주
        else if (left)
            cout << 1; // 왼손만 연주
        else if (right)
            cout << 2; // 오른손만 연주
    }

    cout << endl;
    return 0;
}
